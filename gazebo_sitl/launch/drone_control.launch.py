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
    drone_yaml_path = gazebo_sitl_path / 'config/drone.yaml'
    rrt_yaml_path = gazebo_sitl_path / 'config/rrt.yaml'

    drone_execute_node = Node(
        package='gazebo_sitl',
        executable='drone_execute_node',
        parameters=[drone_yaml_path]
        )

    rrt_service_node = Node(
        package='gazebo_sitl',
        executable='rrt_service_node',
        parameters=[rrt_yaml_path]
        )

    return LaunchDescription([
        drone_execute_node,
        rrt_service_node,
    ])