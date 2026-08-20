// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_H_
#define HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'di_names'
#include "rosidl_runtime_c/string.h"
// Member 'di_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DigitalIOStates in the package hiwin_msgs.
/**
  * hiwin_msgs/msg/DigitalIOStates.msg
 */
typedef struct hiwin_msgs__msg__DigitalIOStates
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String__Sequence di_names;
  rosidl_runtime_c__boolean__Sequence di_values;
} hiwin_msgs__msg__DigitalIOStates;

// Struct for a sequence of hiwin_msgs__msg__DigitalIOStates.
typedef struct hiwin_msgs__msg__DigitalIOStates__Sequence
{
  hiwin_msgs__msg__DigitalIOStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__msg__DigitalIOStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_H_
