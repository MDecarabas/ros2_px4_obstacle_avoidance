// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__BUILDER_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nu_mavsdk_interfaces/srv/detail/rrt_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nu_mavsdk_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRTService_Request_goal
{
public:
  explicit Init_RRTService_Request_goal(::nu_mavsdk_interfaces::srv::RRTService_Request & msg)
  : msg_(msg)
  {}
  ::nu_mavsdk_interfaces::srv::RRTService_Request goal(::nu_mavsdk_interfaces::srv::RRTService_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::RRTService_Request msg_;
};

class Init_RRTService_Request_start
{
public:
  Init_RRTService_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRTService_Request_goal start(::nu_mavsdk_interfaces::srv::RRTService_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_RRTService_Request_goal(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::RRTService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nu_mavsdk_interfaces::srv::RRTService_Request>()
{
  return nu_mavsdk_interfaces::srv::builder::Init_RRTService_Request_start();
}

}  // namespace nu_mavsdk_interfaces


namespace nu_mavsdk_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRTService_Response_path_y
{
public:
  explicit Init_RRTService_Response_path_y(::nu_mavsdk_interfaces::srv::RRTService_Response & msg)
  : msg_(msg)
  {}
  ::nu_mavsdk_interfaces::srv::RRTService_Response path_y(::nu_mavsdk_interfaces::srv::RRTService_Response::_path_y_type arg)
  {
    msg_.path_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::RRTService_Response msg_;
};

class Init_RRTService_Response_path_x
{
public:
  Init_RRTService_Response_path_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRTService_Response_path_y path_x(::nu_mavsdk_interfaces::srv::RRTService_Response::_path_x_type arg)
  {
    msg_.path_x = std::move(arg);
    return Init_RRTService_Response_path_y(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::RRTService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nu_mavsdk_interfaces::srv::RRTService_Response>()
{
  return nu_mavsdk_interfaces::srv::builder::Init_RRTService_Response_path_x();
}

}  // namespace nu_mavsdk_interfaces

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__BUILDER_HPP_
