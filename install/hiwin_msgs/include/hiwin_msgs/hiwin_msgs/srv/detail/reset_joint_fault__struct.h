// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hiwin_msgs:srv/ResetJointFault.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__STRUCT_H_
#define HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetJointFault in the package hiwin_msgs.
typedef struct hiwin_msgs__srv__ResetJointFault_Request
{
  rosidl_runtime_c__String joint_name;
} hiwin_msgs__srv__ResetJointFault_Request;

// Struct for a sequence of hiwin_msgs__srv__ResetJointFault_Request.
typedef struct hiwin_msgs__srv__ResetJointFault_Request__Sequence
{
  hiwin_msgs__srv__ResetJointFault_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__srv__ResetJointFault_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetJointFault in the package hiwin_msgs.
typedef struct hiwin_msgs__srv__ResetJointFault_Response
{
  bool success;
  rosidl_runtime_c__String message;
} hiwin_msgs__srv__ResetJointFault_Response;

// Struct for a sequence of hiwin_msgs__srv__ResetJointFault_Response.
typedef struct hiwin_msgs__srv__ResetJointFault_Response__Sequence
{
  hiwin_msgs__srv__ResetJointFault_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hiwin_msgs__srv__ResetJointFault_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__STRUCT_H_
