// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwin_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_
#define HIWIN_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'io_group'
// Member 'interface_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetIO in the package hiwin_msgs.
typedef struct hiwin_msgs__srv__SetIO_Request
{
  /// e.g. "system"
  rosidl_runtime_c__String io_group;
  /// e.g. "reset"
  rosidl_runtime_c__String interface_name;
  /// e.g. 1.0
  double value;
} hiwin_msgs__srv__SetIO_Request;

// Struct for a sequence of hiwin_msgs__srv__SetIO_Request.
typedef struct hiwin_msgs__srv__SetIO_Request__Sequence
{
  hiwin_msgs__srv__SetIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__srv__SetIO_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetIO in the package hiwin_msgs.
typedef struct hiwin_msgs__srv__SetIO_Response
{
  bool success;
  rosidl_runtime_c__String message;
} hiwin_msgs__srv__SetIO_Response;

// Struct for a sequence of hiwin_msgs__srv__SetIO_Response.
typedef struct hiwin_msgs__srv__SetIO_Response__Sequence
{
  hiwin_msgs__srv__SetIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__srv__SetIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWIN_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_
