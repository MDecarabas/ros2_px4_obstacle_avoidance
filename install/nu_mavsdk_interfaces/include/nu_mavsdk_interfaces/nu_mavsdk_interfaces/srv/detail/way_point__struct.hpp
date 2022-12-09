// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Request __declspec(deprecated)
#endif

namespace nu_mavsdk_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WayPoint_Request_
{
  using Type = WayPoint_Request_<ContainerAllocator>;

  explicit WayPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0;
    }
  }

  explicit WayPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0;
      this->lon = 0.0;
      this->alt = 0.0;
    }
  }

  // field types and members
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _alt_type =
    double;
  _alt_type alt;

  // setters for named parameter idiom
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__alt(
    const double & _arg)
  {
    this->alt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Request
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Request
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WayPoint_Request_ & other) const
  {
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->alt != other.alt) {
      return false;
    }
    return true;
  }
  bool operator!=(const WayPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WayPoint_Request_

// alias to use template instance with default allocator
using WayPoint_Request =
  nu_mavsdk_interfaces::srv::WayPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nu_mavsdk_interfaces


#ifndef _WIN32
# define DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Response __declspec(deprecated)
#endif

namespace nu_mavsdk_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct WayPoint_Response_
{
  using Type = WayPoint_Response_<ContainerAllocator>;

  explicit WayPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uploaded = false;
    }
  }

  explicit WayPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uploaded = false;
    }
  }

  // field types and members
  using _uploaded_type =
    bool;
  _uploaded_type uploaded;

  // setters for named parameter idiom
  Type & set__uploaded(
    const bool & _arg)
  {
    this->uploaded = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Response
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__WayPoint_Response
    std::shared_ptr<nu_mavsdk_interfaces::srv::WayPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WayPoint_Response_ & other) const
  {
    if (this->uploaded != other.uploaded) {
      return false;
    }
    return true;
  }
  bool operator!=(const WayPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WayPoint_Response_

// alias to use template instance with default allocator
using WayPoint_Response =
  nu_mavsdk_interfaces::srv::WayPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

namespace nu_mavsdk_interfaces
{

namespace srv
{

struct WayPoint
{
  using Request = nu_mavsdk_interfaces::srv::WayPoint_Request;
  using Response = nu_mavsdk_interfaces::srv::WayPoint_Response;
};

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_HPP_
