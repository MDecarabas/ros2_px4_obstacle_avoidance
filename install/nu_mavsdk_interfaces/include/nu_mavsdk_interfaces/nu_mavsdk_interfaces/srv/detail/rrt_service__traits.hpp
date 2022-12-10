// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__TRAITS_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nu_mavsdk_interfaces/srv/detail/rrt_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nu_mavsdk_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRTService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    if (msg.start.size() == 0) {
      out << "start: []";
    } else {
      out << "start: [";
      size_t pending_items = msg.start.size();
      for (auto item : msg.start) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: goal
  {
    if (msg.goal.size() == 0) {
      out << "goal: []";
    } else {
      out << "goal: [";
      size_t pending_items = msg.goal.size();
      for (auto item : msg.goal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRTService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start.size() == 0) {
      out << "start: []\n";
    } else {
      out << "start:\n";
      for (auto item : msg.start) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal.size() == 0) {
      out << "goal: []\n";
    } else {
      out << "goal:\n";
      for (auto item : msg.goal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRTService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use nu_mavsdk_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nu_mavsdk_interfaces::srv::RRTService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nu_mavsdk_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nu_mavsdk_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const nu_mavsdk_interfaces::srv::RRTService_Request & msg)
{
  return nu_mavsdk_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::RRTService_Request>()
{
  return "nu_mavsdk_interfaces::srv::RRTService_Request";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::RRTService_Request>()
{
  return "nu_mavsdk_interfaces/srv/RRTService_Request";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::RRTService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::RRTService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nu_mavsdk_interfaces::srv::RRTService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nu_mavsdk_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRTService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_x
  {
    if (msg.path_x.size() == 0) {
      out << "path_x: []";
    } else {
      out << "path_x: [";
      size_t pending_items = msg.path_x.size();
      for (auto item : msg.path_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_y
  {
    if (msg.path_y.size() == 0) {
      out << "path_y: []";
    } else {
      out << "path_y: [";
      size_t pending_items = msg.path_y.size();
      for (auto item : msg.path_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRTService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_x.size() == 0) {
      out << "path_x: []\n";
    } else {
      out << "path_x:\n";
      for (auto item : msg.path_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: path_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_y.size() == 0) {
      out << "path_y: []\n";
    } else {
      out << "path_y:\n";
      for (auto item : msg.path_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRTService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace nu_mavsdk_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use nu_mavsdk_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nu_mavsdk_interfaces::srv::RRTService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nu_mavsdk_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nu_mavsdk_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const nu_mavsdk_interfaces::srv::RRTService_Response & msg)
{
  return nu_mavsdk_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::RRTService_Response>()
{
  return "nu_mavsdk_interfaces::srv::RRTService_Response";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::RRTService_Response>()
{
  return "nu_mavsdk_interfaces/srv/RRTService_Response";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::RRTService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::RRTService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nu_mavsdk_interfaces::srv::RRTService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::RRTService>()
{
  return "nu_mavsdk_interfaces::srv::RRTService";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::RRTService>()
{
  return "nu_mavsdk_interfaces/srv/RRTService";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::RRTService>
  : std::integral_constant<
    bool,
    has_fixed_size<nu_mavsdk_interfaces::srv::RRTService_Request>::value &&
    has_fixed_size<nu_mavsdk_interfaces::srv::RRTService_Response>::value
  >
{
};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::RRTService>
  : std::integral_constant<
    bool,
    has_bounded_size<nu_mavsdk_interfaces::srv::RRTService_Request>::value &&
    has_bounded_size<nu_mavsdk_interfaces::srv::RRTService_Response>::value
  >
{
};

template<>
struct is_service<nu_mavsdk_interfaces::srv::RRTService>
  : std::true_type
{
};

template<>
struct is_service_request<nu_mavsdk_interfaces::srv::RRTService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nu_mavsdk_interfaces::srv::RRTService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__TRAITS_HPP_
