// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nu_mavsdk_interfaces:srv/RRTService.idl
// generated code does not contain a copyright notice
#include "nu_mavsdk_interfaces/srv/detail/rrt_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nu_mavsdk_interfaces__srv__RRTService_Request__init(nu_mavsdk_interfaces__srv__RRTService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  // goal
  return true;
}

void
nu_mavsdk_interfaces__srv__RRTService_Request__fini(nu_mavsdk_interfaces__srv__RRTService_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  // goal
}

bool
nu_mavsdk_interfaces__srv__RRTService_Request__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Request * lhs, const nu_mavsdk_interfaces__srv__RRTService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  // goal
  if (lhs->goal != rhs->goal) {
    return false;
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__RRTService_Request__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Request * input,
  nu_mavsdk_interfaces__srv__RRTService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  output->start = input->start;
  // goal
  output->goal = input->goal;
  return true;
}

nu_mavsdk_interfaces__srv__RRTService_Request *
nu_mavsdk_interfaces__srv__RRTService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Request * msg = (nu_mavsdk_interfaces__srv__RRTService_Request *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__RRTService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nu_mavsdk_interfaces__srv__RRTService_Request));
  bool success = nu_mavsdk_interfaces__srv__RRTService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nu_mavsdk_interfaces__srv__RRTService_Request__destroy(nu_mavsdk_interfaces__srv__RRTService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nu_mavsdk_interfaces__srv__RRTService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__init(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Request * data = NULL;

  if (size) {
    data = (nu_mavsdk_interfaces__srv__RRTService_Request *)allocator.zero_allocate(size, sizeof(nu_mavsdk_interfaces__srv__RRTService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nu_mavsdk_interfaces__srv__RRTService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nu_mavsdk_interfaces__srv__RRTService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__fini(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nu_mavsdk_interfaces__srv__RRTService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nu_mavsdk_interfaces__srv__RRTService_Request__Sequence *
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array = (nu_mavsdk_interfaces__srv__RRTService_Request__Sequence *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__destroy(nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * lhs, const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__RRTService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__RRTService_Request__Sequence__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * input,
  nu_mavsdk_interfaces__srv__RRTService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nu_mavsdk_interfaces__srv__RRTService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nu_mavsdk_interfaces__srv__RRTService_Request * data =
      (nu_mavsdk_interfaces__srv__RRTService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nu_mavsdk_interfaces__srv__RRTService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nu_mavsdk_interfaces__srv__RRTService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__RRTService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path_x`
// Member `path_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nu_mavsdk_interfaces__srv__RRTService_Response__init(nu_mavsdk_interfaces__srv__RRTService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path_x, 0)) {
    nu_mavsdk_interfaces__srv__RRTService_Response__fini(msg);
    return false;
  }
  // path_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path_y, 0)) {
    nu_mavsdk_interfaces__srv__RRTService_Response__fini(msg);
    return false;
  }
  return true;
}

void
nu_mavsdk_interfaces__srv__RRTService_Response__fini(nu_mavsdk_interfaces__srv__RRTService_Response * msg)
{
  if (!msg) {
    return;
  }
  // path_x
  rosidl_runtime_c__double__Sequence__fini(&msg->path_x);
  // path_y
  rosidl_runtime_c__double__Sequence__fini(&msg->path_y);
}

bool
nu_mavsdk_interfaces__srv__RRTService_Response__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Response * lhs, const nu_mavsdk_interfaces__srv__RRTService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->path_x), &(rhs->path_x)))
  {
    return false;
  }
  // path_y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->path_y), &(rhs->path_y)))
  {
    return false;
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__RRTService_Response__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Response * input,
  nu_mavsdk_interfaces__srv__RRTService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // path_x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->path_x), &(output->path_x)))
  {
    return false;
  }
  // path_y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->path_y), &(output->path_y)))
  {
    return false;
  }
  return true;
}

nu_mavsdk_interfaces__srv__RRTService_Response *
nu_mavsdk_interfaces__srv__RRTService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Response * msg = (nu_mavsdk_interfaces__srv__RRTService_Response *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__RRTService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nu_mavsdk_interfaces__srv__RRTService_Response));
  bool success = nu_mavsdk_interfaces__srv__RRTService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nu_mavsdk_interfaces__srv__RRTService_Response__destroy(nu_mavsdk_interfaces__srv__RRTService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nu_mavsdk_interfaces__srv__RRTService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__init(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Response * data = NULL;

  if (size) {
    data = (nu_mavsdk_interfaces__srv__RRTService_Response *)allocator.zero_allocate(size, sizeof(nu_mavsdk_interfaces__srv__RRTService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nu_mavsdk_interfaces__srv__RRTService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nu_mavsdk_interfaces__srv__RRTService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__fini(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nu_mavsdk_interfaces__srv__RRTService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nu_mavsdk_interfaces__srv__RRTService_Response__Sequence *
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array = (nu_mavsdk_interfaces__srv__RRTService_Response__Sequence *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__destroy(nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__are_equal(const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * lhs, const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__RRTService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__RRTService_Response__Sequence__copy(
  const nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * input,
  nu_mavsdk_interfaces__srv__RRTService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nu_mavsdk_interfaces__srv__RRTService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nu_mavsdk_interfaces__srv__RRTService_Response * data =
      (nu_mavsdk_interfaces__srv__RRTService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nu_mavsdk_interfaces__srv__RRTService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nu_mavsdk_interfaces__srv__RRTService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__RRTService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
