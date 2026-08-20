// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice
#include "hiwin_msgs/msg/detail/digital_io_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `di_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `di_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hiwin_msgs__msg__DigitalIOStates__init(hiwin_msgs__msg__DigitalIOStates * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hiwin_msgs__msg__DigitalIOStates__fini(msg);
    return false;
  }
  // di_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->di_names, 0)) {
    hiwin_msgs__msg__DigitalIOStates__fini(msg);
    return false;
  }
  // di_values
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->di_values, 0)) {
    hiwin_msgs__msg__DigitalIOStates__fini(msg);
    return false;
  }
  return true;
}

void
hiwin_msgs__msg__DigitalIOStates__fini(hiwin_msgs__msg__DigitalIOStates * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // di_names
  rosidl_runtime_c__String__Sequence__fini(&msg->di_names);
  // di_values
  rosidl_runtime_c__boolean__Sequence__fini(&msg->di_values);
}

bool
hiwin_msgs__msg__DigitalIOStates__are_equal(const hiwin_msgs__msg__DigitalIOStates * lhs, const hiwin_msgs__msg__DigitalIOStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // di_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->di_names), &(rhs->di_names)))
  {
    return false;
  }
  // di_values
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->di_values), &(rhs->di_values)))
  {
    return false;
  }
  return true;
}

bool
hiwin_msgs__msg__DigitalIOStates__copy(
  const hiwin_msgs__msg__DigitalIOStates * input,
  hiwin_msgs__msg__DigitalIOStates * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // di_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->di_names), &(output->di_names)))
  {
    return false;
  }
  // di_values
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->di_values), &(output->di_values)))
  {
    return false;
  }
  return true;
}

hiwin_msgs__msg__DigitalIOStates *
hiwin_msgs__msg__DigitalIOStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__DigitalIOStates * msg = (hiwin_msgs__msg__DigitalIOStates *)allocator.allocate(sizeof(hiwin_msgs__msg__DigitalIOStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwin_msgs__msg__DigitalIOStates));
  bool success = hiwin_msgs__msg__DigitalIOStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwin_msgs__msg__DigitalIOStates__destroy(hiwin_msgs__msg__DigitalIOStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwin_msgs__msg__DigitalIOStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwin_msgs__msg__DigitalIOStates__Sequence__init(hiwin_msgs__msg__DigitalIOStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__DigitalIOStates * data = NULL;

  if (size) {
    data = (hiwin_msgs__msg__DigitalIOStates *)allocator.zero_allocate(size, sizeof(hiwin_msgs__msg__DigitalIOStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwin_msgs__msg__DigitalIOStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwin_msgs__msg__DigitalIOStates__fini(&data[i - 1]);
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
hiwin_msgs__msg__DigitalIOStates__Sequence__fini(hiwin_msgs__msg__DigitalIOStates__Sequence * array)
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
      hiwin_msgs__msg__DigitalIOStates__fini(&array->data[i]);
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

hiwin_msgs__msg__DigitalIOStates__Sequence *
hiwin_msgs__msg__DigitalIOStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__DigitalIOStates__Sequence * array = (hiwin_msgs__msg__DigitalIOStates__Sequence *)allocator.allocate(sizeof(hiwin_msgs__msg__DigitalIOStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwin_msgs__msg__DigitalIOStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwin_msgs__msg__DigitalIOStates__Sequence__destroy(hiwin_msgs__msg__DigitalIOStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwin_msgs__msg__DigitalIOStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwin_msgs__msg__DigitalIOStates__Sequence__are_equal(const hiwin_msgs__msg__DigitalIOStates__Sequence * lhs, const hiwin_msgs__msg__DigitalIOStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwin_msgs__msg__DigitalIOStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwin_msgs__msg__DigitalIOStates__Sequence__copy(
  const hiwin_msgs__msg__DigitalIOStates__Sequence * input,
  hiwin_msgs__msg__DigitalIOStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwin_msgs__msg__DigitalIOStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwin_msgs__msg__DigitalIOStates * data =
      (hiwin_msgs__msg__DigitalIOStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwin_msgs__msg__DigitalIOStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwin_msgs__msg__DigitalIOStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwin_msgs__msg__DigitalIOStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
