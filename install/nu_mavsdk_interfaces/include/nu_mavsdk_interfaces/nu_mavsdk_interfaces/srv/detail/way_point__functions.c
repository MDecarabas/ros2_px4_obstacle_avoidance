// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nu_mavsdk_interfaces:srv/WayPoint.idl
// generated code does not contain a copyright notice
#include "nu_mavsdk_interfaces/srv/detail/way_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nu_mavsdk_interfaces__srv__WayPoint_Request__init(nu_mavsdk_interfaces__srv__WayPoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // lat
  // lon
  // alt
  return true;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Request__fini(nu_mavsdk_interfaces__srv__WayPoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // lat
  // lon
  // alt
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Request__are_equal(const nu_mavsdk_interfaces__srv__WayPoint_Request * lhs, const nu_mavsdk_interfaces__srv__WayPoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Request__copy(
  const nu_mavsdk_interfaces__srv__WayPoint_Request * input,
  nu_mavsdk_interfaces__srv__WayPoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  return true;
}

nu_mavsdk_interfaces__srv__WayPoint_Request *
nu_mavsdk_interfaces__srv__WayPoint_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Request * msg = (nu_mavsdk_interfaces__srv__WayPoint_Request *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request));
  bool success = nu_mavsdk_interfaces__srv__WayPoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Request__destroy(nu_mavsdk_interfaces__srv__WayPoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nu_mavsdk_interfaces__srv__WayPoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__init(nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Request * data = NULL;

  if (size) {
    data = (nu_mavsdk_interfaces__srv__WayPoint_Request *)allocator.zero_allocate(size, sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nu_mavsdk_interfaces__srv__WayPoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nu_mavsdk_interfaces__srv__WayPoint_Request__fini(&data[i - 1]);
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
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__fini(nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * array)
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
      nu_mavsdk_interfaces__srv__WayPoint_Request__fini(&array->data[i]);
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

nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence *
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * array = (nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__destroy(nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__are_equal(const nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * lhs, const nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__WayPoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence__copy(
  const nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * input,
  nu_mavsdk_interfaces__srv__WayPoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nu_mavsdk_interfaces__srv__WayPoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nu_mavsdk_interfaces__srv__WayPoint_Request * data =
      (nu_mavsdk_interfaces__srv__WayPoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nu_mavsdk_interfaces__srv__WayPoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nu_mavsdk_interfaces__srv__WayPoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__WayPoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
nu_mavsdk_interfaces__srv__WayPoint_Response__init(nu_mavsdk_interfaces__srv__WayPoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // uploaded
  return true;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Response__fini(nu_mavsdk_interfaces__srv__WayPoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // uploaded
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Response__are_equal(const nu_mavsdk_interfaces__srv__WayPoint_Response * lhs, const nu_mavsdk_interfaces__srv__WayPoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // uploaded
  if (lhs->uploaded != rhs->uploaded) {
    return false;
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Response__copy(
  const nu_mavsdk_interfaces__srv__WayPoint_Response * input,
  nu_mavsdk_interfaces__srv__WayPoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // uploaded
  output->uploaded = input->uploaded;
  return true;
}

nu_mavsdk_interfaces__srv__WayPoint_Response *
nu_mavsdk_interfaces__srv__WayPoint_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Response * msg = (nu_mavsdk_interfaces__srv__WayPoint_Response *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response));
  bool success = nu_mavsdk_interfaces__srv__WayPoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Response__destroy(nu_mavsdk_interfaces__srv__WayPoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nu_mavsdk_interfaces__srv__WayPoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__init(nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Response * data = NULL;

  if (size) {
    data = (nu_mavsdk_interfaces__srv__WayPoint_Response *)allocator.zero_allocate(size, sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nu_mavsdk_interfaces__srv__WayPoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nu_mavsdk_interfaces__srv__WayPoint_Response__fini(&data[i - 1]);
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
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__fini(nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * array)
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
      nu_mavsdk_interfaces__srv__WayPoint_Response__fini(&array->data[i]);
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

nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence *
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * array = (nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence *)allocator.allocate(sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__destroy(nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__are_equal(const nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * lhs, const nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__WayPoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence__copy(
  const nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * input,
  nu_mavsdk_interfaces__srv__WayPoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nu_mavsdk_interfaces__srv__WayPoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nu_mavsdk_interfaces__srv__WayPoint_Response * data =
      (nu_mavsdk_interfaces__srv__WayPoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nu_mavsdk_interfaces__srv__WayPoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nu_mavsdk_interfaces__srv__WayPoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nu_mavsdk_interfaces__srv__WayPoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
