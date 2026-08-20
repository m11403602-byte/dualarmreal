// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice
#include "hiwin_msgs/msg/detail/system_io_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hiwin_msgs__msg__SystemIOStates__init(hiwin_msgs__msg__SystemIOStates * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hiwin_msgs__msg__SystemIOStates__fini(msg);
    return false;
  }
  // breaker
  // e_stop
  // e_stop2
  // fan_error
  // capacitor_error
  // clear_error_notify
  // shutdown_notify
  return true;
}

void
hiwin_msgs__msg__SystemIOStates__fini(hiwin_msgs__msg__SystemIOStates * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // breaker
  // e_stop
  // e_stop2
  // fan_error
  // capacitor_error
  // clear_error_notify
  // shutdown_notify
}

bool
hiwin_msgs__msg__SystemIOStates__are_equal(const hiwin_msgs__msg__SystemIOStates * lhs, const hiwin_msgs__msg__SystemIOStates * rhs)
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
  // breaker
  if (lhs->breaker != rhs->breaker) {
    return false;
  }
  // e_stop
  if (lhs->e_stop != rhs->e_stop) {
    return false;
  }
  // e_stop2
  if (lhs->e_stop2 != rhs->e_stop2) {
    return false;
  }
  // fan_error
  if (lhs->fan_error != rhs->fan_error) {
    return false;
  }
  // capacitor_error
  if (lhs->capacitor_error != rhs->capacitor_error) {
    return false;
  }
  // clear_error_notify
  if (lhs->clear_error_notify != rhs->clear_error_notify) {
    return false;
  }
  // shutdown_notify
  if (lhs->shutdown_notify != rhs->shutdown_notify) {
    return false;
  }
  return true;
}

bool
hiwin_msgs__msg__SystemIOStates__copy(
  const hiwin_msgs__msg__SystemIOStates * input,
  hiwin_msgs__msg__SystemIOStates * output)
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
  // breaker
  output->breaker = input->breaker;
  // e_stop
  output->e_stop = input->e_stop;
  // e_stop2
  output->e_stop2 = input->e_stop2;
  // fan_error
  output->fan_error = input->fan_error;
  // capacitor_error
  output->capacitor_error = input->capacitor_error;
  // clear_error_notify
  output->clear_error_notify = input->clear_error_notify;
  // shutdown_notify
  output->shutdown_notify = input->shutdown_notify;
  return true;
}

hiwin_msgs__msg__SystemIOStates *
hiwin_msgs__msg__SystemIOStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__SystemIOStates * msg = (hiwin_msgs__msg__SystemIOStates *)allocator.allocate(sizeof(hiwin_msgs__msg__SystemIOStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwin_msgs__msg__SystemIOStates));
  bool success = hiwin_msgs__msg__SystemIOStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwin_msgs__msg__SystemIOStates__destroy(hiwin_msgs__msg__SystemIOStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwin_msgs__msg__SystemIOStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwin_msgs__msg__SystemIOStates__Sequence__init(hiwin_msgs__msg__SystemIOStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__SystemIOStates * data = NULL;

  if (size) {
    data = (hiwin_msgs__msg__SystemIOStates *)allocator.zero_allocate(size, sizeof(hiwin_msgs__msg__SystemIOStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwin_msgs__msg__SystemIOStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwin_msgs__msg__SystemIOStates__fini(&data[i - 1]);
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
hiwin_msgs__msg__SystemIOStates__Sequence__fini(hiwin_msgs__msg__SystemIOStates__Sequence * array)
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
      hiwin_msgs__msg__SystemIOStates__fini(&array->data[i]);
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

hiwin_msgs__msg__SystemIOStates__Sequence *
hiwin_msgs__msg__SystemIOStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__msg__SystemIOStates__Sequence * array = (hiwin_msgs__msg__SystemIOStates__Sequence *)allocator.allocate(sizeof(hiwin_msgs__msg__SystemIOStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwin_msgs__msg__SystemIOStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwin_msgs__msg__SystemIOStates__Sequence__destroy(hiwin_msgs__msg__SystemIOStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwin_msgs__msg__SystemIOStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwin_msgs__msg__SystemIOStates__Sequence__are_equal(const hiwin_msgs__msg__SystemIOStates__Sequence * lhs, const hiwin_msgs__msg__SystemIOStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwin_msgs__msg__SystemIOStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwin_msgs__msg__SystemIOStates__Sequence__copy(
  const hiwin_msgs__msg__SystemIOStates__Sequence * input,
  hiwin_msgs__msg__SystemIOStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwin_msgs__msg__SystemIOStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwin_msgs__msg__SystemIOStates * data =
      (hiwin_msgs__msg__SystemIOStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwin_msgs__msg__SystemIOStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwin_msgs__msg__SystemIOStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwin_msgs__msg__SystemIOStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
