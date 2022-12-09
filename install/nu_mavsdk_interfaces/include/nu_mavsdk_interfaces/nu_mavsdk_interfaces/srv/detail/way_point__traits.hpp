// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__TRAITS_HPP_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nu_mavsdk_interfaces/srv/detail/way_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace nu_mavsdk_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WayPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WayPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WayPoint_Request & msg, bool use_flow_style = false)
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
  const nu_mavsdk_interfaces::srv::WayPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  nu_mavsdk_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nu_mavsdk_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const nu_mavsdk_interfaces::srv::WayPoint_Request & msg)
{
  return nu_mavsdk_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::WayPoint_Request>()
{
  return "nu_mavsdk_interfaces::srv::WayPoint_Request";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::WayPoint_Request>()
{
  return "nu_mavsdk_interfaces/srv/WayPoint_Request";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::WayPoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::WayPoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nu_mavsdk_interfaces::srv::WayPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace nu_mavsdk_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const WayPoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: uploaded
  {
    out << "uploaded: ";
    rosidl_generator_traits::value_to_yaml(msg.uploaded, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WayPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: uploaded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uploaded: ";
    rosidl_generator_traits::value_to_yaml(msg.uploaded, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WayPoint_Response & msg, bool use_flow_style = false)
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
  const nu_mavsdk_interfaces::srv::WayPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  nu_mavsdk_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nu_mavsdk_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const nu_mavsdk_interfaces::srv::WayPoint_Response & msg)
{
  return nu_mavsdk_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::WayPoint_Response>()
{
  return "nu_mavsdk_interfaces::srv::WayPoint_Response";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::WayPoint_Response>()
{
  return "nu_mavsdk_interfaces/srv/WayPoint_Response";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::WayPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::WayPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nu_mavsdk_interfaces::srv::WayPoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nu_mavsdk_interfaces::srv::WayPoint>()
{
  return "nu_mavsdk_interfaces::srv::WayPoint";
}

template<>
inline const char * name<nu_mavsdk_interfaces::srv::WayPoint>()
{
  return "nu_mavsdk_interfaces/srv/WayPoint";
}

template<>
struct has_fixed_size<nu_mavsdk_interfaces::srv::WayPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<nu_mavsdk_interfaces::srv::WayPoint_Request>::value &&
    has_fixed_size<nu_mavsdk_interfaces::srv::WayPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<nu_mavsdk_interfaces::srv::WayPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<nu_mavsdk_interfaces::srv::WayPoint_Request>::value &&
    has_bounded_size<nu_mavsdk_interfaces::srv::WayPoint_Response>::value
  >
{
};

template<>
struct is_service<nu_mavsdk_interfaces::srv::WayPoint>
  : std::true_type
{
};

template<>
struct is_service_request<nu_mavsdk_interfaces::srv::WayPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nu_mavsdk_interfaces::srv::WayPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__TRAITS_HPP_
