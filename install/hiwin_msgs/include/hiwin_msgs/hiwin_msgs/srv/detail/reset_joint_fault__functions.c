// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hiwin_msgs:srv/ResetJointFault.idl
// generated code does not contain a copyright notice
#include "hiwin_msgs/srv/detail/reset_joint_fault__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

bool
hiwin_msgs__srv__ResetJointFault_Request__init(hiwin_msgs__srv__ResetJointFault_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    hiwin_msgs__srv__ResetJointFault_Request__fini(msg);
    return false;
  }
  return true;
}

void
hiwin_msgs__srv__ResetJointFault_Request__fini(hiwin_msgs__srv__ResetJointFault_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
}

bool
hiwin_msgs__srv__ResetJointFault_Request__are_equal(const hiwin_msgs__srv__ResetJointFault_Request * lhs, const hiwin_msgs__srv__ResetJointFault_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_name), &(rhs->joint_name)))
  {
    return false;
  }
  return true;
}

bool
hiwin_msgs__srv__ResetJointFault_Request__copy(
  const hiwin_msgs__srv__ResetJointFault_Request * input,
  hiwin_msgs__srv__ResetJointFault_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_name), &(output->joint_name)))
  {
    return false;
  }
  return true;
}

hiwin_msgs__srv__ResetJointFault_Request *
hiwin_msgs__srv__ResetJointFault_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Request * msg = (hiwin_msgs__srv__ResetJointFault_Request *)allocator.allocate(sizeof(hiwin_msgs__srv__ResetJointFault_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwin_msgs__srv__ResetJointFault_Request));
  bool success = hiwin_msgs__srv__ResetJointFault_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwin_msgs__srv__ResetJointFault_Request__destroy(hiwin_msgs__srv__ResetJointFault_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwin_msgs__srv__ResetJointFault_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwin_msgs__srv__ResetJointFault_Request__Sequence__init(hiwin_msgs__srv__ResetJointFault_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Request * data = NULL;

  if (size) {
    data = (hiwin_msgs__srv__ResetJointFault_Request *)allocator.zero_allocate(size, sizeof(hiwin_msgs__srv__ResetJointFault_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwin_msgs__srv__ResetJointFault_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwin_msgs__srv__ResetJointFault_Request__fini(&data[i - 1]);
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
hiwin_msgs__srv__ResetJointFault_Request__Sequence__fini(hiwin_msgs__srv__ResetJointFault_Request__Sequence * array)
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
      hiwin_msgs__srv__ResetJointFault_Request__fini(&array->data[i]);
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

hiwin_msgs__srv__ResetJointFault_Request__Sequence *
hiwin_msgs__srv__ResetJointFault_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Request__Sequence * array = (hiwin_msgs__srv__ResetJointFault_Request__Sequence *)allocator.allocate(sizeof(hiwin_msgs__srv__ResetJointFault_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwin_msgs__srv__ResetJointFault_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwin_msgs__srv__ResetJointFault_Request__Sequence__destroy(hiwin_msgs__srv__ResetJointFault_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwin_msgs__srv__ResetJointFault_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwin_msgs__srv__ResetJointFault_Request__Sequence__are_equal(const hiwin_msgs__srv__ResetJointFault_Request__Sequence * lhs, const hiwin_msgs__srv__ResetJointFault_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwin_msgs__srv__ResetJointFault_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwin_msgs__srv__ResetJointFault_Request__Sequence__copy(
  const hiwin_msgs__srv__ResetJointFault_Request__Sequence * input,
  hiwin_msgs__srv__ResetJointFault_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwin_msgs__srv__ResetJointFault_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwin_msgs__srv__ResetJointFault_Request * data =
      (hiwin_msgs__srv__ResetJointFault_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwin_msgs__srv__ResetJointFault_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwin_msgs__srv__ResetJointFault_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwin_msgs__srv__ResetJointFault_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hiwin_msgs__srv__ResetJointFault_Response__init(hiwin_msgs__srv__ResetJointFault_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hiwin_msgs__srv__ResetJointFault_Response__fini(msg);
    return false;
  }
  return true;
}

void
hiwin_msgs__srv__ResetJointFault_Response__fini(hiwin_msgs__srv__ResetJointFault_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hiwin_msgs__srv__ResetJointFault_Response__are_equal(const hiwin_msgs__srv__ResetJointFault_Response * lhs, const hiwin_msgs__srv__ResetJointFault_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hiwin_msgs__srv__ResetJointFault_Response__copy(
  const hiwin_msgs__srv__ResetJointFault_Response * input,
  hiwin_msgs__srv__ResetJointFault_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hiwin_msgs__srv__ResetJointFault_Response *
hiwin_msgs__srv__ResetJointFault_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Response * msg = (hiwin_msgs__srv__ResetJointFault_Response *)allocator.allocate(sizeof(hiwin_msgs__srv__ResetJointFault_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hiwin_msgs__srv__ResetJointFault_Response));
  bool success = hiwin_msgs__srv__ResetJointFault_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hiwin_msgs__srv__ResetJointFault_Response__destroy(hiwin_msgs__srv__ResetJointFault_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hiwin_msgs__srv__ResetJointFault_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hiwin_msgs__srv__ResetJointFault_Response__Sequence__init(hiwin_msgs__srv__ResetJointFault_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Response * data = NULL;

  if (size) {
    data = (hiwin_msgs__srv__ResetJointFault_Response *)allocator.zero_allocate(size, sizeof(hiwin_msgs__srv__ResetJointFault_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hiwin_msgs__srv__ResetJointFault_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hiwin_msgs__srv__ResetJointFault_Response__fini(&data[i - 1]);
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
hiwin_msgs__srv__ResetJointFault_Response__Sequence__fini(hiwin_msgs__srv__ResetJointFault_Response__Sequence * array)
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
      hiwin_msgs__srv__ResetJointFault_Response__fini(&array->data[i]);
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

hiwin_msgs__srv__ResetJointFault_Response__Sequence *
hiwin_msgs__srv__ResetJointFault_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hiwin_msgs__srv__ResetJointFault_Response__Sequence * array = (hiwin_msgs__srv__ResetJointFault_Response__Sequence *)allocator.allocate(sizeof(hiwin_msgs__srv__ResetJointFault_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hiwin_msgs__srv__ResetJointFault_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hiwin_msgs__srv__ResetJointFault_Response__Sequence__destroy(hiwin_msgs__srv__ResetJointFault_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hiwin_msgs__srv__ResetJointFault_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hiwin_msgs__srv__ResetJointFault_Response__Sequence__are_equal(const hiwin_msgs__srv__ResetJointFault_Response__Sequence * lhs, const hiwin_msgs__srv__ResetJointFault_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hiwin_msgs__srv__ResetJointFault_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hiwin_msgs__srv__ResetJointFault_Response__Sequence__copy(
  const hiwin_msgs__srv__ResetJointFault_Response__Sequence * input,
  hiwin_msgs__srv__ResetJointFault_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hiwin_msgs__srv__ResetJointFault_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hiwin_msgs__srv__ResetJointFault_Response * data =
      (hiwin_msgs__srv__ResetJointFault_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hiwin_msgs__srv__ResetJointFault_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hiwin_msgs__srv__ResetJointFault_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hiwin_msgs__srv__ResetJointFault_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
