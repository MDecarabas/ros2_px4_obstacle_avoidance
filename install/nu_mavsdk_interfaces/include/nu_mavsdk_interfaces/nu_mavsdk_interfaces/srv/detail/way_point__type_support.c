// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nu_mavsdk_interfaces/srv/detail/way_point__rosidl_typesupport_introspection_c.h"
#include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nu_mavsdk_interfaces/srv/detail/way_point__functions.h"
#include "nu_mavsdk_interfaces/srv/detail/way_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nu_mavsdk_interfaces__srv__WayPoint_Request__init(message_memory);
}

void nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_fini_function(void * message_memory)
{
  nu_mavsdk_interfaces__srv__WayPoint_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_member_array[3] = {
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__WayPoint_Request, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__WayPoint_Request, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__WayPoint_Request, alt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_members = {
  "nu_mavsdk_interfaces__srv",  // message namespace
  "WayPoint_Request",  // message name
  3,  // number of fields
  sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request),
  nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_member_array,  // message members
  nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Request)() {
  if (!nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nu_mavsdk_interfaces__srv__WayPoint_Request__rosidl_typesupport_introspection_c__WayPoint_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/way_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/way_point__functions.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/way_point__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nu_mavsdk_interfaces__srv__WayPoint_Response__init(message_memory);
}

void nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_fini_function(void * message_memory)
{
  nu_mavsdk_interfaces__srv__WayPoint_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_member_array[1] = {
  {
    "uploaded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__WayPoint_Response, uploaded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_members = {
  "nu_mavsdk_interfaces__srv",  // message namespace
  "WayPoint_Response",  // message name
  1,  // number of fields
  sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response),
  nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_member_array,  // message members
  nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Response)() {
  if (!nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nu_mavsdk_interfaces__srv__WayPoint_Response__rosidl_typesupport_introspection_c__WayPoint_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/way_point__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_members = {
  "nu_mavsdk_interfaces__srv",  // service namespace
  "WayPoint",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_Request_message_type_support_handle,
  NULL  // response message
  // nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_Response_message_type_support_handle
};

static rosidl_service_type_support_t nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint)() {
  if (!nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, WayPoint_Response)()->data;
  }

  return &nu_mavsdk_interfaces__srv__detail__way_point__rosidl_typesupport_introspection_c__WayPoint_service_type_support_handle;
}
