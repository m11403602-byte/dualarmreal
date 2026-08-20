// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwin_msgs/msg/detail/digital_io_states__rosidl_typesupport_introspection_c.h"
#include "hiwin_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwin_msgs/msg/detail/digital_io_states__functions.h"
#include "hiwin_msgs/msg/detail/digital_io_states__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `di_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `di_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwin_msgs__msg__DigitalIOStates__init(message_memory);
}

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_fini_function(void * message_memory)
{
  hiwin_msgs__msg__DigitalIOStates__fini(message_memory);
}

size_t hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__size_function__DigitalIOStates__di_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__fetch_function__DigitalIOStates__di_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__assign_function__DigitalIOStates__di_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__resize_function__DigitalIOStates__di_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__size_function__DigitalIOStates__di_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__fetch_function__DigitalIOStates__di_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__assign_function__DigitalIOStates__di_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__resize_function__DigitalIOStates__di_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwin_msgs__msg__DigitalIOStates, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "di_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwin_msgs__msg__DigitalIOStates, di_names),  // bytes offset in struct
    NULL,  // default value
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__size_function__DigitalIOStates__di_names,  // size() function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_names,  // get_const(index) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_names,  // get(index) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__fetch_function__DigitalIOStates__di_names,  // fetch(index, &value) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__assign_function__DigitalIOStates__di_names,  // assign(index, value) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__resize_function__DigitalIOStates__di_names  // resize(index) function pointer
  },
  {
    "di_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwin_msgs__msg__DigitalIOStates, di_values),  // bytes offset in struct
    NULL,  // default value
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__size_function__DigitalIOStates__di_values,  // size() function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_const_function__DigitalIOStates__di_values,  // get_const(index) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__get_function__DigitalIOStates__di_values,  // get(index) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__fetch_function__DigitalIOStates__di_values,  // fetch(index, &value) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__assign_function__DigitalIOStates__di_values,  // assign(index, value) function pointer
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__resize_function__DigitalIOStates__di_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_members = {
  "hiwin_msgs__msg",  // message namespace
  "DigitalIOStates",  // message name
  3,  // number of fields
  sizeof(hiwin_msgs__msg__DigitalIOStates),
  hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_member_array,  // message members
  hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_type_support_handle = {
  0,
  &hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwin_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwin_msgs, msg, DigitalIOStates)() {
  hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_type_support_handle.typesupport_identifier) {
    hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwin_msgs__msg__DigitalIOStates__rosidl_typesupport_introspection_c__DigitalIOStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
