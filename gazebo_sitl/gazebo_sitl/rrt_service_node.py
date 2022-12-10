import rclpy
from rclpy.node import Node

import random
import math

from nu_mavsdk_interfaces.srv import RRTService #Service to return RRT Path given start coordinates and end goal


class RRT(Node):
    def __init__(self, x, y):
        super().__init__('rrt_service')
        self.srv = self.create_service(RRTService, 'rrt_points', self.rrt_points)
        self.x = x
        self.y = y
        self.parent = None

def get_random_point(x_min, x_max, y_min, y_max):
    '''
    get_random_point takes in x & y minimum and maximum locations to generate a random point for the RRT to search a path to.
    The function returns a call to the RRT class to search for a pathway to the points
    '''
    x = random.uniform(x_min, x_max)
    y = random.uniform(y_min, y_max)
    return RRT(x, y)

def get_nearest_node(tree, point):
    '''
    get_nearest_node finds the nearest node from current position and generates a minimum distance trajectory. 
    '''
    min_dist = float('inf')
    min_node = None
    for node in tree:
        dist = math.sqrt((node.x - point.x)**2 + (node.y - point.y)**2)
        if dist <= min_dist:
            min_dist = dist
            min_node = node
    return min_node

def get_new_point(nearest_node, point, step_size):
    dist = math.sqrt((nearest_node.x - point.x)**2 + (nearest_node.y - point.y)**2)
    if dist <= step_size:
        return point
    else:
        theta = math.atan2(point.y - nearest_node.y, point.x - nearest_node.x)
        new_x = nearest_node.x + step_size * math.cos(theta)
        new_y = nearest_node.y + step_size * math.sin(theta)
        return Node(new_x, new_y)

def check_collision(point, obstacles):
    for obs in obstacles:
        if point.x >= obs[0][0] and point.x <= obs[1][0] and point.y >= obs[0][1] and point.y <= obs[1][1]:
            return True
    return False

def get_path(goal_node):
    path = []
    node = goal_node
    while node:
        path.append(node)
        node = node.parent
    return path

def rrt(start, goal, obstacles, x_min, x_max, y_min, y_max, step_size, max_iter):
    tree = []
    tree.append(start)
    for i in range(max_iter):
        point = get_random_point(x_min, x_max, y_min, y_max)
        nearest_node = get_nearest_node(tree, point)
        new_point = get_new_point(nearest_node, point, step_size)
        if not check_collision(new_point, obstacles):
            new_point.parent = nearest_node
            tree.append(new_point)
            if math.sqrt((new_point.x - goal.x)**2 + (new_point.y - goal.y)**2) <= step_size:
                goal.parent = new_point
                tree.append(goal)
                return get_path(goal)
    return None

def rrt_points(self, request, response):
    # start = RRT(0, 0)
    # goal = RRT(20, 5)
    start = request.start
    goal = request.goal

# 7.5 x 0.2
    obstacles = [[(1, 1), (3.5, -3.5)], [(-2.5, 6), (3.5, 6.5)], [(6, 6), (-0.5, 6.5)],  [(5.5, 13.5), (-2.5, -6.5)], [(19, 19), (3.5, -3.5)]]
    x_min = -5                                                                  #minimum x to explore in 2d space
    x_max = 25                                                                  #maximum x to explore in 2d space
    y_min = -7                                                                  #minimum y to explore in 2d space
    y_max = 7                                                                   #maximum y to explore in 2d space
    step_size = 0.5                                                             # step size
    max_iter = 1000                                                             # Number of maximum Steps
    path = rrt(start, goal, obstacles, x_min, x_max, y_min, y_max, step_size, max_iter)
    if path:
        response.path_x = []
        response.path_y = []
        for i in range(len(path) - 1):
            response.path_x.append(path[i].x)
            response.path_y.append(path[i].y)       
        response.path_x.reverse()
        response.path_y.reverse()
    else:
        path = rrt(start, goal, obstacles, x_min, x_max, y_min, y_max, step_size, max_iter)

    return response


def main(args=None):
    rclpy.init(args=args)

    minimal_service = RRT()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()