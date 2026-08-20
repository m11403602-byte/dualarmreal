# [來源] 修改自: hiwin_driver/launch/ra6_control.launch.py（官方原檔）
# [引用] 執行期引用的 underlay 檔案（準確位置, FindPackageShare 解析）:
#   hiwin_ra6_moveit_config/config/ra6.urdf.xacro              (URDF 入口, 傳 tf_prefix)
#     |- hiwin_description/urdf/ra.urdf.xacro -> ra_macro.xacro (本體, tf_prefix 套 link/joint)
#     |- hiwin_ra6_moveit_config/config/ecat.ros2_control.xacro (cabinet=ecat 實機)
#     |    +- hiwin_driver/config/ra610_1476/joint_1~6_config.yaml    (EtherCAT 驅動器設定)
#     +- hiwin_ra6_moveit_config/config/ra6.ros2_control.xacro  (use_fake_hardware=true 虛擬)
#          +- hiwin_ra6_moveit_config/config/initial_positions.yaml
#   hiwin_driver/config/gpio_controller.yaml                    (gpio spawner, cabinet=ecat 時)
#   hiwin_description/rviz/view_robot.rviz                      (launch_rviz=true 時)
# [本包] 使用本套件檔案: config/ra6_controllers.yaml（前綴版控制器設定）
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import (
    Command,
    FindExecutable,
    PathJoinSubstitution,
    LaunchConfiguration,
    PythonExpression,
)

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

# [NEW] 本 overlay 套件名稱（內含前綴版 ra6_controllers.yaml）；官方原檔沒有這個常數
THIS_PKG = "big_arm_bringup"

# [REVISE] 本臂專屬預設值（與 big_arm_moveit_config 的 ra6_moveit.launch.py 一致）。
#   原因: 本套件 ra6_controllers.yaml 已寫死 big_joint_*，若忘帶 tf_prefix 會造成
#   URDF(無前綴) 與 controllers(big_) 關節名不一致 -> 控制器認領介面失敗卡 inactive。
#   給定預設值讓不帶參數也能正確啟動（指令明寫參數仍可覆寫）。
DEFAULT_RA_TYPE   = "ra610_1476"
DEFAULT_TF_PREFIX = "big_"
DEFAULT_NAMESPACE = "big_arm"


def launch_setup():
    # Launch arguments
    ra_type = LaunchConfiguration("ra_type")
    use_fake_hardware = LaunchConfiguration("use_fake_hardware")
    robot_ip = LaunchConfiguration("robot_ip")
    cabinet = LaunchConfiguration("cabinet")
    initial_joint_controller = LaunchConfiguration("initial_joint_controller")
    launch_rviz = LaunchConfiguration("launch_rviz")
    rviz_config = LaunchConfiguration("rviz_config")
    tf_prefix = LaunchConfiguration("tf_prefix")     # [NEW] 官方有宣告 arg 卻沒在此定義變數，補上
    namespace = LaunchConfiguration("namespace")     # [NEW] namespace 化：整支手臂推進 /big_arm

    # Get URDF via xacro（來自 underlay 的 hiwin_ra6_moveit_config，不變）
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("hiwin_ra6_moveit_config"),
                    "config",
                    "ra6.urdf.xacro",
                ]
            ),
            " ",
            "name:=",
            "ra_type",
            " ",
            "ra_type:=",
            ra_type,
            " ",
            "cabinet:=",
            cabinet,
            " ",
            "use_fake_hardware:=",
            use_fake_hardware,
            " ",
            "robot_ip:=",
            robot_ip,
            # [NEW] 官方原檔到 robot_ip 為止；以下三行把 tf_prefix 傳進 xacro
            " ",
            "tf_prefix:=",
            tf_prefix,
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    # Launch robot_state_publisher to publish TF frames
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        namespace=namespace,                 # [NEW] -> /big_arm/robot_state_publisher
        output="both",
        parameters=[
            robot_description,
            {"use_sim_time": False},
        ],
    )

    # Path to the controller configuration file
    # [REVISE] 原本 FindPackageShare("hiwin_driver") -> 改用本 overlay 套件的前綴版 yaml
    robot_controllers = PathJoinSubstitution(
        [FindPackageShare(THIS_PKG), "config", "ra6_controllers.yaml"]
    )

    # Launch ros2_control node with the controller configuration
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        namespace=namespace,                 # [NEW] -> /big_arm/controller_manager
        parameters=[robot_controllers],
        remappings=[
            # [REVISE] 原本目標 "/robot_description"(絕對) -> "robot_description"(相對)
            #          namespace 下才會對到 /big_arm/robot_description（rsp 發佈處）
            ("~/robot_description", "robot_description"),
        ],
        output="both",
    )

    # Spawner for joint_state_broadcaster (publishes joint_states topic)
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        namespace=namespace,                 # [NEW]
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "controller_manager",            # [REVISE] 原本 "/controller_manager"(絕對) -> 相對
        ],
    )

    # Spawner for the main manipulator controller
    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        namespace=namespace,                 # [NEW]
        # [REVISE] 原本 "-c", "/controller_manager" -> 相對 "controller_manager"
        arguments=[initial_joint_controller, "-c", "controller_manager"],
    )

    # Delay launching manipulator controller until joint_state_broadcaster is ready
    robot_controller_after_jsb_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[robot_controller_spawner],
        )
    )

    # Spawner for the controller that resets hardware fault states
    reset_fault_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        namespace=namespace,                 # [NEW]
        arguments=[
            "reset_fault_controller",
            "-c",
            "controller_manager",            # [REVISE] 原本 "/controller_manager" -> 相對
        ],
    )

    # Delay launching reset_fault_controller until robot_controller_spawner is ready
    reset_fault_controller_after_rbc_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=robot_controller_spawner,
            on_exit=[reset_fault_controller_spawner],
        )
    )

    # Spawner for GPIO controller (e.g., for digital IO)
    gpio_controller_spawner = Node(
        package="controller_manager",
        namespace=namespace,                 # [NEW]
        condition=IfCondition(PythonExpression(['"', cabinet, '" == "ecat"'])),
        executable="spawner",
        arguments=[
            "gpio_controller",
            "-c",
            "controller_manager",            # [REVISE] 原本 "/controller_manager" -> 相對
            "--param-file",
            # （gpio 設定檔仍取自 underlay 的 hiwin_driver，不變）
            PathJoinSubstitution(
                [FindPackageShare("hiwin_driver"), "config", "gpio_controller.yaml"]
            ),
        ],
    )

    # Delay launching GPIO controller until manipulator controller is ready
    gpio_controller_after_robot_controller_spawner = RegisterEventHandler(
        condition=IfCondition(PythonExpression(['"', cabinet, '" == "ecat"'])),
        event_handler=OnProcessExit(
            target_action=robot_controller_spawner,
            on_exit=[gpio_controller_spawner],
        ),
    )

    # Path to RViz config file
    rviz_config = PathJoinSubstitution(
        [FindPackageShare("hiwin_description"), "rviz", "view_robot.rviz"]
    )

    # Launch RViz if enabled via launch argument
    rviz_node = Node(
        package="rviz2",
        namespace=namespace,                 # [NEW]
        condition=IfCondition(launch_rviz),
        executable="rviz2",
        name="rviz2_moveit",
        output="log",
        arguments=["-d", rviz_config],
    )

    # Delay RViz until joint_state_broadcaster is ready
    rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[rviz_node],
        )
    )

    nodes_to_start = [
        robot_state_publisher_node,
        control_node,
        joint_state_broadcaster_spawner,
        robot_controller_after_jsb_spawner,
        reset_fault_controller_after_rbc_spawner,
        gpio_controller_after_robot_controller_spawner,
        rviz_after_joint_state_broadcaster_spawner,
    ]

    return nodes_to_start


def generate_launch_description():
    # Declare launch arguments with default values and descriptions
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "ra_type",
            default_value=DEFAULT_RA_TYPE,   # [REVISE] 官方無預設; 本臂機型固定故給預設
            description="Typo/series of used RA robot.",
            choices=[
                "ra605_710",
                "ra610_1355",
                "ra610_1476",
                "ra610_1869",
            ],
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "use_fake_hardware",
            default_value="false",
            description="Use mock hardware that mirrors commands to states.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_ip",
            default_value="0.0.0.0",
            description="IP address of the physical robot controller.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "cabinet",
            default_value="gc2",
            description="HIWIN robot control cabinet model.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "launch_rviz",
            default_value="false",
            description="Whether to launch RViz for visualization.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "tf_prefix",
            default_value=DEFAULT_TF_PREFIX,   # [REVISE] 原預設 "" -> 對齊 controllers yaml 的前綴
            description=(
                "Prefix for joint names. Required for multi-robot setup. "
                "Must match joint names in controller YAML config."
            ),
        )
    )
    # [NEW] 官方原檔沒有 namespace 這個參數
    declared_arguments.append(
        DeclareLaunchArgument(
            "namespace",
            default_value=DEFAULT_NAMESPACE,   # [REVISE] 原預設 "" -> 本臂 namespace
            description="ROS namespace pushed onto all nodes (e.g. big_arm / small_arm).",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "initial_joint_controller",
            default_value="joint_trajectory_controller",
            description="Initially loaded robot controller.",
            choices=[
                "hiwin_controller",
                "joint_trajectory_controller",
            ],
        )
    )

    return LaunchDescription(declared_arguments + launch_setup())
