// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nu_mavsdk_interfaces/srv/detail/rrt_service__rosidl_typesupport_introspection_c.h"
#include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nu_mavsdk_interfaces/srv/detail/rrt_service__functions.h"
#include "nu_mavsdk_interfaces/srv/detail/rrt_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nu_mavsdk_interfaces__srv__RRTService_Request__init(message_memory);
}

void nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_fini_function(void * message_memory)
{
  nu_mavsdk_interfaces__srv__RRTService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_member_array[2] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__RRTService_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__RRTService_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_members = {
  "nu_mavsdk_interfaces__srv",  // message namespace
  "RRTService_Request",  // message name
  2,  // number of fields
  sizeof(nu_mavsdk_interfaces__srv__RRTService_Request),
  nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_member_array,  // message members
  nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Request)() {
  if (!nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nu_mavsdk_interfaces__srv__RRTService_Request__rosidl_typesupport_introspection_c__RRTService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/rrt_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/rrt_service__functions.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/rrt_service__struct.h"


// Include directives for member types
// Member `path_x`
// Member `path_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nu_mavsdk_interfaces__srv__RRTService_Response__init(message_memory);
}

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_fini_function(void * message_memory)
{
  nu_mavsdk_interfaces__srv__RRTService_Response__fini(message_memory);
}

size_t nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__size_function__RRTService_Response__path_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__fetch_function__RRTService_Response__path_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__assign_function__RRTService_Response__path_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__resize_function__RRTService_Response__path_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__size_function__RRTService_Response__path_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__fetch_function__RRTService_Response__path_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__assign_function__RRTService_Response__path_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__resize_function__RRTService_Response__path_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_member_array[2] = {
  {
    "path_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__RRTService_Response, path_x),  // bytes offset in struct
    NULL,  // default value
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__size_function__RRTService_Response__path_x,  // size() function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_x,  // get_const(index) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_x,  // get(index) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__fetch_function__RRTService_Response__path_x,  // fetch(index, &value) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__assign_function__RRTService_Response__path_x,  // assign(index, value) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__resize_function__RRTService_Response__path_x  // resize(index) function pointer
  },
  {
    "path_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nu_mavsdk_interfaces__srv__RRTService_Response, path_y),  // bytes offset in struct
    NULL,  // default value
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__size_function__RRTService_Response__path_y,  // size() function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_const_function__RRTService_Response__path_y,  // get_const(index) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__get_function__RRTService_Response__path_y,  // get(index) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__fetch_function__RRTService_Response__path_y,  // fetch(index, &value) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__assign_function__RRTService_Response__path_y,  // assign(index, value) function pointer
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__resize_function__RRTService_Response__path_y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_members = {
  "nu_mavsdk_interfaces__srv",  // message namespace
  "RRTService_Response",  // message name
  2,  // number of fields
  sizeof(nu_mavsdk_interfaces__srv__RRTService_Response),
  nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_member_array,  // message members
  nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Response)() {
  if (!nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nu_mavsdk_interfaces__srv__RRTService_Response__rosidl_typesupport_introspection_c__RRTService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nu_mavsdk_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "nu_mavsdk_interfaces/srv/detail/rrt_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_members = {
  "nu_mavsdk_interfaces__srv",  // service namespace
  "RRTService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_Request_message_type_support_handle,
  NULL  // response message
  // nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_Response_message_type_support_handle
};

static rosidl_service_type_support_t nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_type_support_handle = {
  0,
  &nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nu_mavsdk_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService)() {
  if (!nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_type_support_handle.typesupport_identifier) {
    nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nu_mavsdk_interfaces, srv, RRTService_Response)()->data;
  }

  return &nu_mavsdk_interfaces__srv__detail__rrt_service__rosidl_typesupport_introspection_c__RRTService_service_type_support_handle;
}
