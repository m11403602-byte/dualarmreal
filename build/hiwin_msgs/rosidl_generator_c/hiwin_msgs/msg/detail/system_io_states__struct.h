// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_H_
#define HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_H_

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

/// Struct defined in msg/SystemIOStates in the package hiwin_msgs.
/**
  * hiwin_msgs/msg/SystemIOStates.msg
 */
typedef struct hiwin_msgs__msg__SystemIOStates
{
  builtin_interfaces__msg__Time stamp;
  bool breaker;
  bool e_stop;
  bool e_stop2;
  bool fan_error;
  bool capacitor_error;
  bool clear_error_notify;
  bool shutdown_notify;
} hiwin_msgs__msg__SystemIOStates;

// Struct for a sequence of hiwin_msgs__msg__SystemIOStates.
typedef struct hiwin_msgs__msg__SystemIOStates__Sequence
{
  hiwin_msgs__msg__SystemIOStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__msg__SystemIOStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_H_
