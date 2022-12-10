// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice

#ifndef NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__FUNCTIONS_H_
#define NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nu_mavsdk_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "nu_mavsdk_interfaces/srv/detail/rrt_service__struct.h"

/// Initialize srv/RRTService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nu_mavsdk_interfaces__srv__RRTService_Request
 * )) before or use
 * nu_mavsdk_interfaces__srv__RRTService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__init(nu_mavsdk_interfaces__srv__RRTService_Request * msg);

/// Finalize srv/RRTService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Request__fini(nu_mavsdk_interfaces__srv__RRTService_Request * msg);

/// Create srv/RRTService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
nu_mavsdk_interfaces__srv__RRTService_Request *
nu_mavsdk_interfaces__srv__RRTService_Request__create();

/// Destroy srv/RRTService message.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Request__destroy(nu_mavsdk_interfaces__srv__RRTService_Request * msg);

/// Check for srv/RRTService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Request * lhs, const nu_mavsdk_interfaces__srv__RRTService_Request * rhs);

/// Copy a srv/RRTService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Request * input,
  nu_mavsdk_interfaces__srv__RRTService_Request * output);

/// Initialize array of srv/RRTService messages.
/**
 * It allocates the memory for the number of elements and calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__init(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array, size_t size);

/// Finalize array of srv/RRTService messages.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__fini(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array);

/// Create array of srv/RRTService messages.
/**
 * It allocates the memory for the array and calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence *
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__create(size_t size);

/// Destroy array of srv/RRTService messages.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__destroy(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array);

/// Check for srv/RRTService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * lhs, const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * rhs);

/// Copy an array of srv/RRTService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * input,
  nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * output);

/// Initialize srv/RRTService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nu_mavsdk_interfaces__srv__RRTService_Response
 * )) before or use
 * nu_mavsdk_interfaces__srv__RRTService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__init(nu_mavsdk_interfaces__srv__RRTService_Response * msg);

/// Finalize srv/RRTService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Response__fini(nu_mavsdk_interfaces__srv__RRTService_Response * msg);

/// Create srv/RRTService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
nu_mavsdk_interfaces__srv__RRTService_Response *
nu_mavsdk_interfaces__srv__RRTService_Response__create();

/// Destroy srv/RRTService message.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Response__destroy(nu_mavsdk_interfaces__srv__RRTService_Response * msg);

/// Check for srv/RRTService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Response * lhs, const nu_mavsdk_interfaces__srv__RRTService_Response * rhs);

/// Copy a srv/RRTService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Response * input,
  nu_mavsdk_interfaces__srv__RRTService_Response * output);

/// Initialize array of srv/RRTService messages.
/**
 * It allocates the memory for the number of elements and calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__init(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array, size_t size);

/// Finalize array of srv/RRTService messages.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__fini(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array);

/// Create array of srv/RRTService messages.
/**
 * It allocates the memory for the array and calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence *
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__create(size_t size);

/// Destroy array of srv/RRTService messages.
/**
 * It calls
 * nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
void
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__destroy(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array);

/// Check for srv/RRTService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * lhs, const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * rhs);

/// Copy an array of srv/RRTService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nu_mavsdk_interfaces
bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * input,
  nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NU_MAVSDK_INTERFACES__SRV__DETAIL__RRT_SERVICE__FUNCTIONS_H_
