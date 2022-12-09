// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_H_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/WayPoint in the package nu_mavsdk_interfaces.
typedef struct nu_mavsdk_interfaces__srv__WayPoint_Request
{
  double lat;
  double lon;
  double alt;
} nu_mavsdk_interfaces__srv__WayPoint_Request;

// Struct for a sequence of nu_mavsdk_interfaces__srv__WayPoint_Request.
typedef struct nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence
{
  nu_mavsdk_interfaces__srv__WayPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/WayPoint in the package nu_mavsdk_interfaces.
typedef struct nu_mavsdk_interfaces__srv__WayPoint_Response
{
  bool uploaded;
} nu_mavsdk_interfaces__srv__WayPoint_Response;

// Struct for a sequence of nu_mavsdk_interfaces__srv__WayPoint_Response.
typedef struct nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence
{
  nu_mavsdk_interfaces__srv__WayPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__WAY_POINT__STRUCT_H_
