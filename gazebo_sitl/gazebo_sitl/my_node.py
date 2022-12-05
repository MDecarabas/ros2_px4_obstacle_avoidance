#!/usr/bin/env python3
import rclpy
import asyncio
import time

from mavsdk import System
from mavsdk.mission import (MissionItem, MissionPlan)

from rclpy.node import Node
from std_msgs.msg import String
from rclpy.callback_groups import ReentrantCallbackGroup


from nu_mavsdk_interfaces.srv import WayPoint


class MinimalPublisher(Node):
    def __init__(self):
        super().__init__('minimal_publisher')
        self.cbgroup = ReentrantCallbackGroup()

        self.droneSetup = self.droneInit()

        self.MissionPlanSrv = self.create_service(WayPoint, "waypoint", self.callback, callback_group=self.cbgroup)

        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.droneInit())
#####
        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.MissionPlan())

        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.executeMission())


    async def callback(self, request, response):

        self.lat = request.lat
        self.lon = request.lon
        self.alt = request.alt

        response.uploaded == True     

        return response


    async def droneInit(self):
        self.drone = System() #Initialize Drone

        await self.drone.connect(system_address="udp://:14540") #Connect to UDP sitl address 
        self.get_logger().info("Waiting for drone to connect...")
        async for state in self.drone.core.connection_state():
            if state.is_connected:
                print(f"-- Connected to drone!")
                break
        await self.drone.action.arm()

    async def MissionPlan(self):

        print_mission_progress_task = asyncio.ensure_future(self.print_mission_progress(self.drone))

        running_tasks = [print_mission_progress_task]
        self.termination_task = asyncio.ensure_future(self.observe_is_in_air(self.drone, running_tasks))

        mission_items = []
        mission_items.append(MissionItem(47.398039859999997,
                                        8.5455725400000002,
                                        25,
                                        10,
                                        True,
                                        float('nan'),
                                        float('nan'),
                                        MissionItem.CameraAction.NONE,
                                        float('nan'),
                                        float('nan'),
                                        float('nan'),
                                        float('nan'),
                                        float('nan')))


        mission_plan = MissionPlan(mission_items)

        await self.drone.mission.set_return_to_launch_after_mission(True)

        print("-- Uploading mission")
        await self.drone.mission.upload_mission(mission_plan)

        print("Waiting for drone to have a global position estimate...")
        async for health in self.drone.telemetry.health():
            if health.is_global_position_ok and health.is_home_position_ok:
                print("-- Global position estimate OK")
                break


    async def executeMission(self):

        print("-- Starting mission")
        await self.drone.mission.start_mission()

        # time.sleep(10)

        # await self.drone.mission.clear_mission()


        await self.termination_task

    async def cancelMission(self):

        print("-- Cancelling mission")

        await self.drone.mission.clear_mission()
        pass

    async def print_mission_progress(self, drone):
        async for mission_progress in drone.mission.mission_progress():
            print(f"Mission progress: "
                f"{mission_progress.current}/"
                f"{mission_progress.total}")

    async def recalculatePath(self):
        pass


    async def observe_is_in_air(self, drone, running_tasks):
        """ 
        Monitors whether the drone is flying or not and
        returns after landing 
        """

        was_in_air = False

        async for is_in_air in drone.telemetry.in_air():
            if is_in_air:
                was_in_air = is_in_air

            if was_in_air and not is_in_air:
                for task in running_tasks:
                    task.cancel()
                    try:
                        await task
                    except asyncio.CancelledError:
                        pass
                await asyncio.get_event_loop().shutdown_asyncgens()

                return

    


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()

    rclpy.shutdown()

if __name__ == "__main__":
    main()