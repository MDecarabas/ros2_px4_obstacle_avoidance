// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__BUILDER_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nu_mavsdk_interfaces/srv/detail/way_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nu_mavsdk_interfaces
{

namespace srv
{

namespace builder
{

class Init_WayPoint_Request_alt
{
public:
  explicit Init_WayPoint_Request_alt(::nu_mavsdk_interfaces::srv::WayPoint_Request & msg)
  : msg_(msg)
  {}
  ::nu_mavsdk_interfaces::srv::WayPoint_Request alt(::nu_mavsdk_interfaces::srv::WayPoint_Request::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::WayPoint_Request msg_;
};

class Init_WayPoint_Request_lon
{
public:
  explicit Init_WayPoint_Request_lon(::nu_mavsdk_interfaces::srv::WayPoint_Request & msg)
  : msg_(msg)
  {}
  Init_WayPoint_Request_alt lon(::nu_mavsdk_interfaces::srv::WayPoint_Request::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_WayPoint_Request_alt(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::WayPoint_Request msg_;
};

class Init_WayPoint_Request_lat
{
public:
  Init_WayPoint_Request_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WayPoint_Request_lon lat(::nu_mavsdk_interfaces::srv::WayPoint_Request::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_WayPoint_Request_lon(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::WayPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nu_mavsdk_interfaces::srv::WayPoint_Request>()
{
  return nu_mavsdk_interfaces::srv::builder::Init_WayPoint_Request_lat();
}

}  // namespace nu_mavsdk_interfaces


namespace nu_mavsdk_interfaces
{

namespace srv
{

namespace builder
{

class Init_WayPoint_Response_uploaded
{
public:
  Init_WayPoint_Response_uploaded()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nu_mavsdk_interfaces::srv::WayPoint_Response uploaded(::nu_mavsdk_interfaces::srv::WayPoint_Response::_uploaded_type arg)
  {
    msg_.uploaded = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nu_mavsdk_interfaces::srv::WayPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nu_mavsdk_interfaces::srv::WayPoint_Response>()
{
  return nu_mavsdk_interfaces::srv::builder::Init_WayPoint_Response_uploaded();
}

}  // namespace nu_mavsdk_interfaces

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__BUILDER_HPP_
