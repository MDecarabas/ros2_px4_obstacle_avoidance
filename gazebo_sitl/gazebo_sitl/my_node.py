#!/usr/bin/env python3
import rclpy
import asyncio

from mavsdk import System
from mavsdk.offboard import (PositionNedYaw, OffboardError)

from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup

from nu_mavsdk_interfaces.srv import RRTService #Service to return RRT Path given start coordinates and end goal

class DroneExecute(Node):
    def __init__(self):
        super().__init__('drone_execute')
        self.cbgroup = ReentrantCallbackGroup()

        self.droneSetup = self.droneInit()

        self.RRT_client = self.create_client(RRTService, 'rrt_points')             #Client for rrt points initialized
        self.RRT_Request = RRTService.Request()

        while not self.RRT_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.droneInit())

        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.run())

    def rrtRequest(self, start, goal):
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

        start = [0, 0]
        goal = [0, 0]

        rrtResponse = self.rrtRequest(start, goal)

        print("-- Setting initial setpoint")
        await self.drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, 0.0, 0.0))

        print("-- Starting offboard")
        try:
            await self.drone.offboard.start()
        except OffboardError as error:
            print(f"Starting offboard mode failed with error code: {error._result.result}")
            print("-- Disarming")
            await self.drone.action.disarm()
            return

        async def print_z_velocity(drone):
            async for odom in self.drone.telemetry.position_velocity_ned():
                print(f"{odom.velocity.north_m_s} {odom.velocity.down_m_s}")

        asyncio.ensure_future(print_z_velocity(self.drone))

        await self.drone.offboard.set_position_ned(PositionNedYaw(0.0, 0.0, -10.0, 0.0))
        await asyncio.sleep(5)

        rrtResponse.path_x = 20
        rrtResponse.path_y = 20

        for i in range(len(rrtResponse.path_x)):

            await self.drone.offboard.set_position_ned(PositionNedYaw(rrtResponse.path_x[i], rrtResponse.path_y[i], -10.0, 0.0))
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