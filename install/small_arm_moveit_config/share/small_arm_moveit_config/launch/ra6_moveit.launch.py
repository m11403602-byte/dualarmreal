# [來源] 修改自: hiwin_ra6_moveit_config/launch/ra6_moveit.launch.py（官方原檔）;
#         控制節點段與 small_arm_bringup/launch/ra6_control.launch.py 相同 [SYNC]
# [引用] 執行期引用的 underlay 檔案（準確位置, FindPackageShare 解析）:
#   hiwin_ra6_moveit_config/config/ra6.urdf.xacro              (URDF 入口, 傳 tf_prefix)
#     |- hiwin_description/urdf/ra.urdf.xacro -> ra_macro.xacro (本體, tf_prefix 套 link/joint)
#     |- hiwin_ra6_moveit_config/config/ecat.ros2_control.xacro (cabinet=ecat 實機)
#     |    +- hiwin_driver/config/ra605_710/joint_1~6_config.yaml    (EtherCAT 驅動器設定)
#     +- hiwin_ra6_moveit_config/config/ra6.ros2_control.xacro  (use_fake_hardware=true 虛擬)
#          +- hiwin_ra6_moveit_config/config/initial_positions.yaml
#   hiwin_ra6_moveit_config/config/kinematics.yaml              (IK 設定, 原版直接載)
#   hiwin_driver/config/gpio_controller.yaml                    (gpio spawner, cabinet=ecat 時)
# [本包] 使用本套件檔案（small_arm_moveit_config/config/）:
#   ra6_prefixed.srdf / joint_limits_prefixed.yaml / moveit_controllers.yaml
#   / ra6_controllers.yaml（[SYNC] 複本）/ moveit.rviz（含 Move Group Namespace）
# =====================================================================
# [overlay] small 臂單臂 MoveIt launch — ra6_moveit.launch.py
#   (本包 small_arm_moveit_config: MoveIt 設定; 完全自足, 不依賴控制包)
#
#   結構比照官方 hiwin_ra6_moveit_config/launch/ra6_moveit.launch.py:
#   全部節點寫在同一檔 (rsp + ros2_control + spawners + move_group + RViz),
#   啟動排序用 RegisterEventHandler + OnProcessExit (事件驅動, 等前者真正完成):
#       jsb_spawner 完成 -> robot_controller_spawner
#       robot_controller 完成 -> reset_fault / gpio / ★move_group★
#       jsb_spawner 完成 -> RViz
#
#   與官方的差異:
#     [NEW]    全節點進 namespace (/small_arm), controller_manager/robot_description 相對名
#              (控制節點與本套件 ra6_control.launch.py 相同; 改控制層時與 small_arm_bringup/launch/ra6_control.launch.py 同步 [SYNC])
#     [REVISE] SRDF / joint_limits 用本套件前綴版 (官方靜態檔無前綴, 對不上 small_joint_*)
#     [REVISE] moveit_controllers 用本套件版 (控制器名 joint_trajectory_controller,
#              對齊 ra6_controllers.yaml; 官方是 manipulator_controller)
#     [REVISE] RViz 設定檔用 hiwin_ra6_moveit_config 的 moveit.rviz
#              (官方原檔誤指 hiwin_rs4_moveit_config)
#     [NEW]    參數有預設值 (ra605_710 / ecat / small_ / small_arm), 一鍵啟動:
#              ros2 launch small_arm_moveit_config ra6_moveit.launch.py
# =====================================================================
import os
import yaml

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
from launch_ros.parameter_descriptions import ParameterValue
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory

THIS_PKG    = "small_arm_moveit_config"   # 本包
DEFAULT_RA_TYPE = "ra605_710"
DEFAULT_TF_PREFIX = "small_"
DEFAULT_NAMESPACE = "small_arm"


# [NEW] 手動載檔輔助 (取代官方的 MoveItConfigsBuilder)
def load_file(package_name, file_path):
    with open(os.path.join(get_package_share_directory(package_name), file_path), "r") as f:
        return f.read()


def load_yaml(package_name, file_path):
    with open(os.path.join(get_package_share_directory(package_name), file_path), "r") as f:
        return yaml.safe_load(f)


def launch_setup():
    # Launch arguments
    ra_type = LaunchConfiguration("ra_type")
    use_fake_hardware = LaunchConfiguration("use_fake_hardware")
    robot_ip = LaunchConfiguration("robot_ip")
    cabinet = LaunchConfiguration("cabinet")
    initial_joint_controller = LaunchConfiguration("initial_joint_controller")
    launch_rviz = LaunchConfiguration("launch_rviz")
    tf_prefix = LaunchConfiguration("tf_prefix")
    namespace = LaunchConfiguration("namespace")

    # =================================================================
    # MoveIt 參數 — [REVISE] 官方用 MoveItConfigsBuilder 自動組;
    #   本檔手動組參數 (因 SRDF/joint_limits 需改用前綴版檔案)
    # =================================================================
    # robot_description: 與 ra6_control.launch.py 相同的 xacro 與參數 [SYNC]
    #   (xacro 本體仍是 underlay 原檔, 未修改)
    robot_description_content = Command([
        PathJoinSubstitution([FindExecutable(name="xacro")]), " ",
        PathJoinSubstitution([FindPackageShare("hiwin_ra6_moveit_config"),
                              "config", "ra6.urdf.xacro"]), " ",
        "name:=", "ra_type", " ",
        "ra_type:=", ra_type, " ",
        "cabinet:=", cabinet, " ",
        "use_fake_hardware:=", use_fake_hardware, " ",
        "robot_ip:=", robot_ip, " ",
        "tf_prefix:=", tf_prefix,
    ])
    robot_description = {
        "robot_description": ParameterValue(robot_description_content, value_type=str)
    }

    # [REVISE] SRDF: 本套件前綴版 (small_joint_* / small_link_*)
    robot_description_semantic = {
        "robot_description_semantic": load_file(THIS_PKG, "config/ra6_prefixed.srdf")
    }

    # kinematics: underlay 原版 (key 是 group 名 manipulator, 無關節名, 未修改)
    robot_description_kinematics = {
        "robot_description_kinematics": load_yaml(
            "hiwin_ra6_moveit_config", "config/kinematics.yaml")
    }

    # [REVISE] joint_limits: 本套件前綴版 (small_joint_*, 速度值沿用 hiwin)
    robot_description_planning = {
        "robot_description_planning": load_yaml(
            THIS_PKG, "config/joint_limits_prefixed.yaml")
    }

    # [NEW] 規劃 pipeline: 標準 OMPL, 顯式設定 (官方由 Builder 帶預設)
    #   (單臂用 OMPL; 雙臂避障 pipeline 在主機端)
    planning_pipelines = {
        "planning_pipelines": ["ompl"],
        "default_planning_pipeline": "ompl",
        "ompl": {
            "planning_plugin": "ompl_interface/OMPLPlanner",
            "request_adapters": (
                "default_planner_request_adapters/AddTimeOptimalParameterization "
                "default_planner_request_adapters/FixWorkspaceBounds "
                "default_planner_request_adapters/FixStartStateBounds "
                "default_planner_request_adapters/FixStartStateCollision "
                "default_planner_request_adapters/FixStartStatePathConstraints"
            ),
            "start_state_max_bounds_error": 0.1,
        },
    }

    # [REVISE] MoveIt 控制器: 本套件版 (對齊 ra6_controllers.yaml)
    #   相對名 joint_trajectory_controller 在 namespace 下
    #   -> /small_arm/joint_trajectory_controller/follow_joint_trajectory
    moveit_controllers = load_yaml(THIS_PKG, "config/moveit_controllers.yaml")

    # [NEW] 軌跡執行參數, 顯式設定 (官方由 Builder 帶入)
    #   moveit_manage_controllers=False: 控制器由本檔 spawner 啟好, move_group 不切換
    trajectory_execution = {
        "moveit_manage_controllers": False,
        "trajectory_execution.allowed_execution_duration_scaling": 1.2,
        "trajectory_execution.allowed_goal_duration_margin": 0.5,
        "trajectory_execution.allowed_start_tolerance": 0.01,
    }

    # [NEW] planning scene monitor 發布設定
    planning_scene_monitor = {
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
    }

    # =================================================================
    # 控制層節點 — 與 small_arm_bringup/launch/ra6_control.launch.py 相同 [SYNC]
    # =================================================================
    # Launch robot_state_publisher to publish TF frames
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        namespace=namespace,                 # [NEW] -> /small_arm/robot_state_publisher
        output="both",
        parameters=[
            robot_description,
            {"use_sim_time": False},
        ],
    )

    # [REVISE] controllers yaml 用本包複本 (與控制包 ra6_controllers.yaml 同步 [SYNC])
    robot_controllers = PathJoinSubstitution(
        [FindPackageShare(THIS_PKG), "config", "ra6_controllers.yaml"]
    )

    # Launch ros2_control node with the controller configuration
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        namespace=namespace,                 # [NEW] -> /small_arm/controller_manager
        parameters=[robot_controllers],
        remappings=[
            # [REVISE] 相對名, namespace 下對到 /small_arm/robot_description
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
            "controller_manager",            # [REVISE] 相對名
        ],
    )

    # Spawner for the main manipulator controller
    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        namespace=namespace,                 # [NEW]
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
            "controller_manager",            # [REVISE] 相對名
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
            "controller_manager",            # [REVISE] 相對名
            "--param-file",
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

    # =================================================================
    # MoveIt 節點 — 排序比照官方 ra6_moveit.launch.py
    # =================================================================
    # Launch MoveIt move_group node (main planning pipeline)
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        namespace=namespace,                 # [NEW] -> /small_arm/move_group
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            robot_description_kinematics,
            robot_description_planning,
            planning_pipelines,
            moveit_controllers,
            trajectory_execution,
            planning_scene_monitor,
            {"use_sim_time": False},
        ],
    )

    # Delay launching move_group until manipulator controller is ready (官方排序)
    move_group_after_robot_controller_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=robot_controller_spawner,
            on_exit=[move_group_node],
        )
    )

    # Path to RViz config file
    # [REVISE] 用本包複本 (官方原檔誤指 hiwin_rs4_moveit_config, 且缺 Move Group Namespace
    #   欄位 -> RViz 載入時會用空字串蓋掉節點 namespace, panel 連錯 move_group;
    #   本包複本已注入 Move Group Namespace: /small_arm)
    rviz_config = PathJoinSubstitution(
        [FindPackageShare(THIS_PKG), "config", "moveit.rviz"]
    )

    # Launch RViz if enabled via launch argument
    # [NEW] MoveIt MotionPlanning 外掛把互動標記 topic 寫死為絕對名 (根空間),
    #   多個 RViz 同開會共用同一 topic 互相干擾 (序號錯亂 -> segfault)。
    #   remappings 是程序級 (套用 RViz 行程內所有節點, 含 marker server 與 display 兩端),
    #   把絕對名 remap 成相對名 -> 解析回本 namespace, 各 RViz 互相隔離。
    _im = "rviz_moveit_motion_planning_display/robot_interaction_interactive_marker_topic"
    rviz_node = Node(
        package="rviz2",
        condition=IfCondition(launch_rviz),
        executable="rviz2",
        name="rviz2_moveit",
        remappings=[
            ("/" + _im + "/update", _im + "/update"),
            ("/" + _im + "/feedback", _im + "/feedback"),
            ("/" + _im + "/get_interactive_markers", _im + "/get_interactive_markers"),
        ],
        namespace=namespace,                 # [NEW] MotionPlanning panel 對上 /small_arm/move_group
        output="log",
        arguments=["-d", rviz_config],
        parameters=[
            robot_description,
            robot_description_semantic,
            robot_description_kinematics,
            robot_description_planning,
            planning_pipelines,
        ],
    )

    # Delay RViz until joint_state_broadcaster is ready (官方排序)
    rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[rviz_node],
        )
    )

    # List of all nodes and event handlers to launch (官方結構)
    nodes_to_start = [
        robot_state_publisher_node,
        control_node,
        joint_state_broadcaster_spawner,
        robot_controller_after_jsb_spawner,
        reset_fault_controller_after_rbc_spawner,
        gpio_controller_after_robot_controller_spawner,
        move_group_after_robot_controller_spawner,
        rviz_after_joint_state_broadcaster_spawner,
    ]

    return nodes_to_start


def generate_launch_description():
    # Declare launch arguments with default values and descriptions
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "ra_type",
            default_value=DEFAULT_RA_TYPE,   # [NEW] 官方無預設; 本臂固定機型故給預設
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
            default_value="ecat",            # [REVISE] 官方預設 gc2; 本架構用 ecat
            description="HIWIN robot control cabinet model.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "launch_rviz",
            default_value="true",
            description="Whether to launch RViz for visualization.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "tf_prefix",
            default_value=DEFAULT_TF_PREFIX,  # [NEW] 預設 small_
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
            default_value=DEFAULT_NAMESPACE,  # [NEW] 預設 small_arm
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
