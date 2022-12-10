# Final_Project_Mixotics Package: Sir Mix-a-lot, the cafe bot!

Authors and Maintainers: 
- **Eric Codrea**
  


## **Description**


## **Install Guide**
1. `git clone https://github.com/PX4/PX4-Autopilot.git --recursive`
2. `colcon build`
3. `. install/setup.bash`
4. Copy the model & world within src folder of this repository into the following paths of the PX4-Autopilot repository `../PX4-Autopilot/Tools/simulation/gazebo/sitl_gazebo/worlds`  & `../PX4-Autopilot/Tools/simulation/gazebo/sitl_gazebo/models`  
5. Ensure that gazebo 11 and ros2 humble are also installed

## **User Guide**
1. Open 1 terminal
2. `cd ../to/PX4-Autopilot` 
3. `make px4_sitl gazebo <model_name> <world name>`
4. Wait for world to load
5. `ros2 launch gazebo_sitl drone_control.launch.py`
6. If you desire to follow a different trajectory please update the obstacle parameter within the rrt node & the start/end parameters within the drone executor node
7. To use the ros2 service to call the rrt again use the following command `ros2 service call /rrt_points /nu_mavsdk_interfaces/srv/RRTService "{start: [], goal: []}" `


## Contents

This package contains:
- src:
    - gazebo sitl:
        - `package.xml`: Package configuration
        - `drone_yaml`: Start and end goal positions
        - `drone_control.launch.py`: launch file to launch rrt node and drone executor node
        - `setup.py`: Build configuration
        - `iris_realsense.sdf`: Model file for an iris drone with realsense camera to be open with gazebo 11
        - `drone_executor_node`: Node that makes drone execute rrt_service
        - `rrt_service_node`: Service node that creates rrt path
    - nu_mavsdk_interfaces:
        - `RRTService.srv`: srv file used to call RRT node
- cad_files:
    1. `Bottom_drone_holder`: Contains fixture to mount drone to test rig
    2. `Top Drone Fixture`: Contains fixture to mount battery and components to top of drone
    3. `bearing holder`: Contains casing to hold bearings which was used to create testing rig
    4. `drone_rings`: Contains lasercuttable rings to create the testing rig

- `README.md`
    * Hello There!


## High Level Concepts and Overall System Architecture

The process loop of the drone SITL is as follows:
1. RRT is called to plan globally around given obstacles and creates a path to follow
2. Drone executor node receives discretized path and then follows it till completion

## Demonstrations
A video demonstration can be viewed at the following link: https://youtu.be/On3OisquyMc


## *Python Dependencies*
All code for this package was developed and test in Python 3. 

Additionally, users will need to install MavSDK-Python using:
```python
pip install mavsdk
```
