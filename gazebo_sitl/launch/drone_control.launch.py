from ament_index_python.packages import get_package_share_path
from ament_index_python.packages import get_package_share_directory
import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.conditions import LaunchConfigurationEquals
from launch.actions import DeclareLaunchArgument


def generate_launch_description():

    gazebo_sitl_path = get_package_share_path('gazebo_sitl')
    tag_yaml_path = gazebo_sitl_path / 'config/tag.yaml'
    default_rviz_config_path = gazebo_sitl_path / 'april.rviz'
    calibration_path = gazebo_sitl_path / 'calibration.yaml'

    drone_control_node = Node(
        package='gazebo_sitl',
        executable='apriltag_node',
        parameters=[tag_yaml_path]
        )

    rrt_service_node = Node(
        package='gazebo_sitl',
        executable='april_tf',
        parameters=[calibration_path]
        )

    return LaunchDescription([
        drone_control_node,
        rrt_service_node,
    ])