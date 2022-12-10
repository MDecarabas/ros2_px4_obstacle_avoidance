// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Request __attribute__((deprecated))
#else
# define DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Request __declspec(deprecated)
#endif

namespace nu_mavsdk_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRTService_Request_
{
  using Type = RRTService_Request_<ContainerAllocator>;

  explicit RRTService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RRTService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _start_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_type start;
  using _goal_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__start(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Request
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Request
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRTService_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRTService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRTService_Request_

// alias to use template instance with default allocator
using RRTService_Request =
  nu_mavsdk_interfaces::srv::RRTService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nu_mavsdk_interfaces


#ifndef _WIN32
# define DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Response __attribute__((deprecated))
#else
# define DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Response __declspec(deprecated)
#endif

namespace nu_mavsdk_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RRTService_Response_
{
  using Type = RRTService_Response_<ContainerAllocator>;

  explicit RRTService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RRTService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _path_x_type path_x;
  using _path_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _path_y_type path_y;

  // setters for named parameter idiom
  Type & set__path_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->path_x = _arg;
    return *this;
  }
  Type & set__path_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->path_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Response
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nu_mavsdk_interfaces__srv__RRTService_Response
    std::shared_ptr<nu_mavsdk_interfaces::srv::RRTService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RRTService_Response_ & other) const
  {
    if (this->path_x != other.path_x) {
      return false;
    }
    if (this->path_y != other.path_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const RRTService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RRTService_Response_

// alias to use template instance with default allocator
using RRTService_Response =
  nu_mavsdk_interfaces::srv::RRTService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

namespace nu_mavsdk_interfaces
{

namespace srv
{

struct RRTService
{
  using Request = nu_mavsdk_interfaces::srv::RRTService_Request;
  using Response = nu_mavsdk_interfaces::srv::RRTService_Response;
};

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_HPP_
