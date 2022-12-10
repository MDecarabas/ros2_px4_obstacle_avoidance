// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_H_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RRTService in the package nu_mavsdk_interfaces.
typedef struct nu_mavsdk_interfaces__srv__RRTService_Request
{
  double start;
  double goal;
} nu_mavsdk_interfaces__srv__RRTService_Request;

// Struct for a sequence of nu_mavsdk_interfaces__srv__RRTService_Request.
typedef struct nu_mavsdk_interfaces__srv__RRTService_Request__Sequence
{
  nu_mavsdk_interfaces__srv__RRTService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nu_mavsdk_interfaces__srv__RRTService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path_x'
// Member 'path_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/RRTService in the package nu_mavsdk_interfaces.
typedef struct nu_mavsdk_interfaces__srv__RRTService_Response
{
  rosidl_runtime_c__double__Sequence path_x;
  rosidl_runtime_c__double__Sequence path_y;
} nu_mavsdk_interfaces__srv__RRTService_Response;

// Struct for a sequence of nu_mavsdk_interfaces__srv__RRTService_Response.
typedef struct nu_mavsdk_interfaces__srv__RRTService_Response__Sequence
{
  nu_mavsdk_interfaces__srv__RRTService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nu_mavsdk_interfaces__srv__RRTService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__STRUCT_H_
