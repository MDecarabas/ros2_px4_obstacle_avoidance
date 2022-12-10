#!/usr/bin/env python3
import rclpy
import asyncio

from mavsdk import System
from mavsdk.offboard import (PositionNedYaw, OffboardError)

from rclpy.node import Node
from rcl_interfaces.msg import ParameterDescriptor

from nu_mavsdk_interfaces.srv import RRTService #Service to return RRT Path given start coordinates and end goal

class DroneExecute(Node):

    '''
    The DroneExecute class contains the functions neccesary for a robot in a px4-autopilot gazebo simulation to fly around obstacles declared in the RRT service.
    The functions inside DroneExecute are the init, droneInit rrtRequest and run functions. Init initializes the parameters and
    functions used, droneInit initializes the communication between the gazebo sim and mavsdk, rrtRequest gets a discretized path plan, and run makes the drone
    execute actions till the end point.
        Typical usage example:
            Execute = DroneExecute()
    '''
    def __init__(self):
        '''
        init function that initializes all essential variables for the program to run as well as the required services
        '''

        super().__init__('drone_execute')
        self.altitude = -10                                                        #desired drone altitude 
#Start & Goal Points declared in the yaml
        self.declare_parameter("start", [0.0, 0.0], ParameterDescriptor(
            description="The x translation from base to world frame"))
        self.start = self.get_parameter("start").get_parameter_value().double_value 

        self.declare_parameter("goal", [20.0, 5.0], ParameterDescriptor(
            description="The x translation from base to world frame"))
        self.goal = self.get_parameter("goal").get_parameter_value().double_value

        self.droneSetup = self.droneInit()                                         #drone initialization called

        self.RRT_client = self.create_client(RRTService, 'rrt_points')             #Client for rrt points initialized
        self.RRT_Request = RRTService.Request()

        while not self.RRT_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.droneInit())

        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.run())                                 #run actions till completions

    def rrtRequest(self, start, goal):
        '''
        calls the rrt node to plan a path given a start point and the goal
        '''
        self.RRT_Request.start = start
        self.RRT_Request.goal = goal

        self.future = self.RRT_client.call_async(self.RRT_Request)
        rclpy.spin_until_future_complete(self, self.future)

        return self.future.result()


    async def droneInit(self):
        """
        droneInit function connects to the udp port of the drone, establishes a connection and arms the drone once the connection is secured 
        """
        self.drone = System() #Initialize Drone

        await self.drone.connect(system_address="udp://:14540") #Connect to UDP sitl address 
        self.get_logger().info("Waiting for drone to connect...")
        async for state in self.drone.core.connection_state():
            if state.is_connected:
                print(f"-- Connected to drone!")
                break

        print("Waiting for drone to have a global position estimate...")
        async for health in self.drone.telemetry.health():
            if health.is_global_position_ok and health.is_home_position_ok:
                print("-- Global position estimate OK")
                break

        await self.drone.action.arm()

    async def run(self):
        """
        the run functions uses the mavsdk api to move the drone relative to its initial position to be able to navigate around the obstacles which the rrt path planner planned around
        """
        rrtResponse = self.rrtRequest(self.start, self.goal)

        self.get_logger().info("-- Setting initial setpoint")
        await self.drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, 0.0, 0.0))

        self.get_logger().info("-- Starting offboard")
        try:
            await self.drone.offboard.start()
        except OffboardError as error:
            self.get_logger().info(f"Starting offboard mode failed with error code: {error._result.result}")
            self.get_logger().info("-- Disarming")
            await self.drone.action.disarm()
            return

        async def print_z_velocity(drone):
            async for odom in self.drone.telemetry.position_velocity_ned():
                self.get_logger().info(f"{odom.velocity.north_m_s} {odom.velocity.down_m_s}")

        asyncio.ensure_future(print_z_velocity(self.drone))

        await self.drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, self.altitude, 0.0))
        await asyncio.sleep(5)

        for i in range(len(rrtResponse.path_x)):

            await self.drone.offboard.set_position_ned(PositionNedYaw(rrtResponse.path_x[i], rrtResponse.path_y[i], self.altitude, 0.0))
            await asyncio.sleep(5)

        await self.drone.action.land()


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = DroneExecute()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()

    rclpy.shutdown()

if __name__ == "__main__":
    main()