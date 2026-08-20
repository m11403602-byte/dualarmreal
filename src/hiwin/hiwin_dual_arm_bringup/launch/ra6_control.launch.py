from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, RegisterEventHandler, GroupAction
from launch.conditions import IfCondition
from launch.event_handlers import OnProcessExit
from launch.substitutions import (
    Command,
    FindExecutable,
    PathJoinSubstitution,
    LaunchConfiguration,
    PythonExpression,
)

from launch_ros.actions import Node, PushRosNamespace
from launch_ros.substitutions import FindPackageShare


def launch_setup():
    # Launch arguments
    ra_type = LaunchConfiguration("ra_type")
    use_fake_hardware = LaunchConfiguration("use_fake_hardware")
    robot_ip = LaunchConfiguration("robot_ip")
    cabinet = LaunchConfiguration("cabinet")
    initial_joint_controller = LaunchConfiguration("initial_joint_controller")
    launch_rviz = LaunchConfiguration("launch_rviz")

    # Dual-arm parameters
    tf_prefix = LaunchConfiguration("tf_prefix")
    controllers_file = LaunchConfiguration("controllers_file")
    publish_tf = LaunchConfiguration("publish_tf")
    arm_namespace = LaunchConfiguration("arm_namespace")

    # Get URDF via xacro
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
            " ",
            "tf_prefix:=",
            tf_prefix,
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    # Launch robot_state_publisher to publish TF frames
    robot_state_publisher_node = Node(
        condition=IfCondition(publish_tf),
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="both",
        parameters=[
            robot_description,
            {"use_sim_time": False},
        ],
    )

    # Path to the controller configuration file
    robot_controllers = PathJoinSubstitution(
        [FindPackageShare("hiwin_dual_arm_bringup"), "config", controllers_file]
    )

    # Launch ros2_control node with the controller configuration
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        output="both",
    )

    # Spawner for joint_state_broadcaster (publishes joint_states topic)
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "controller_manager",
        ],
    )

    # Spawner for the main manipulator controller
    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[initial_joint_controller, "-c", ["/", arm_namespace, "/controller_manager"]],
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
        arguments=[
            "reset_fault_controller",
            "-c",
            ["/", arm_namespace, "/controller_manager"],
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
        condition=IfCondition(PythonExpression(['"', cabinet, '" == "ecat"'])),
        executable="spawner",
        arguments=[
            "gpio_controller",
            "-c",
            ["/", arm_namespace, "/controller_manager"],
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

    # Path to RViz config file
    rviz_config_path = PathJoinSubstitution(
        [FindPackageShare("hiwin_description"), "rviz", "view_robot.rviz"]
    )

    # Launch RViz if enabled via launch argument
    rviz_node = Node(
        package="rviz2",
        condition=IfCondition(launch_rviz),
        executable="rviz2",
        name="rviz2_moveit",
        output="log",
        arguments=["-d", rviz_config_path],
    )

    # Delay RViz until joint_state_broadcaster is ready
    rviz_after_joint_state_broadcaster_spawner = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=joint_state_broadcaster_spawner,
            on_exit=[rviz_node],
        )
    )

    # Wrap all nodes in namespace
    namespaced_nodes = GroupAction([
        PushRosNamespace(arm_namespace),
        robot_state_publisher_node,
        control_node,
        joint_state_broadcaster_spawner,
        robot_controller_after_jsb_spawner,
        reset_fault_controller_after_rbc_spawner,
        gpio_controller_after_robot_controller_spawner,
        rviz_after_joint_state_broadcaster_spawner,
    ])

    return [namespaced_nodes]


def generate_launch_description():
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "ra_type",
            description="Type/series of used RA robot.",
            choices=[
                "ra605_710",
                "ra610_1355",
                "ra610_1476",
                "ra610_1869",
            ],
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument("use_fake_hardware", default_value="false")
    )
    declared_arguments.append(
        DeclareLaunchArgument("robot_ip", default_value="0.0.0.0")
    )
    declared_arguments.append(
        DeclareLaunchArgument("cabinet", default_value="gc2")
    )
    declared_arguments.append(
        DeclareLaunchArgument("launch_rviz", default_value="false")
    )
    declared_arguments.append(
        DeclareLaunchArgument("initial_joint_controller",
                              default_value="joint_trajectory_controller")
    )

    # Dual-arm parameters (defaults = backward compatible with single-arm)
    declared_arguments.append(
        DeclareLaunchArgument("tf_prefix", default_value="",
                              description="Prefix for joint names (e.g. big_ or small_)")
    )
    declared_arguments.append(
        DeclareLaunchArgument("controllers_file", default_value="ra6_controllers.yaml",
                              description="Controller YAML config file name")
    )
    declared_arguments.append(
        DeclareLaunchArgument("publish_tf", default_value="true",
                              description="Publish TF (set false on slave arms)")
    )
    declared_arguments.append(
        DeclareLaunchArgument("arm_namespace", default_value="",
                              description="Namespace for multi-robot (e.g. big_arm)")
    )

    return LaunchDescription(declared_arguments + launch_setup())