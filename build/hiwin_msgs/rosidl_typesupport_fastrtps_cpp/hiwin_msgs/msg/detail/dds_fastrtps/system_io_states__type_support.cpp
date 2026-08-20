// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice
#include "hiwin_msgs/msg/detail/system_io_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hiwin_msgs/msg/detail/system_io_states__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace hiwin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwin_msgs
cdr_serialize(
  const hiwin_msgs::msg::SystemIOStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: breaker
  cdr << (ros_message.breaker ? true : false);
  // Member: e_stop
  cdr << (ros_message.e_stop ? true : false);
  // Member: e_stop2
  cdr << (ros_message.e_stop2 ? true : false);
  // Member: fan_error
  cdr << (ros_message.fan_error ? true : false);
  // Member: capacitor_error
  cdr << (ros_message.capacitor_error ? true : false);
  // Member: clear_error_notify
  cdr << (ros_message.clear_error_notify ? true : false);
  // Member: shutdown_notify
  cdr << (ros_message.shutdown_notify ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hiwin_msgs::msg::SystemIOStates & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: breaker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.breaker = tmp ? true : false;
  }

  // Member: e_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.e_stop = tmp ? true : false;
  }

  // Member: e_stop2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.e_stop2 = tmp ? true : false;
  }

  // Member: fan_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fan_error = tmp ? true : false;
  }

  // Member: capacitor_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.capacitor_error = tmp ? true : false;
  }

  // Member: clear_error_notify
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.clear_error_notify = tmp ? true : false;
  }

  // Member: shutdown_notify
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.shutdown_notify = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwin_msgs
get_serialized_size(
  const hiwin_msgs::msg::SystemIOStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: breaker
  {
    size_t item_size = sizeof(ros_message.breaker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e_stop
  {
    size_t item_size = sizeof(ros_message.e_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e_stop2
  {
    size_t item_size = sizeof(ros_message.e_stop2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fan_error
  {
    size_t item_size = sizeof(ros_message.fan_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: capacitor_error
  {
    size_t item_size = sizeof(ros_message.capacitor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clear_error_notify
  {
    size_t item_size = sizeof(ros_message.clear_error_notify);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shutdown_notify
  {
    size_t item_size = sizeof(ros_message.shutdown_notify);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hiwin_msgs
max_serialized_size_SystemIOStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: breaker
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: e_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: e_stop2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fan_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: capacitor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clear_error_notify
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shutdown_notify
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hiwin_msgs::msg::SystemIOStates;
    is_plain =
      (
      offsetof(DataType, shutdown_notify) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SystemIOStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hiwin_msgs::msg::SystemIOStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SystemIOStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hiwin_msgs::msg::SystemIOStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SystemIOStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hiwin_msgs::msg::SystemIOStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SystemIOStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SystemIOStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SystemIOStates__callbacks = {
  "hiwin_msgs::msg",
  "SystemIOStates",
  _SystemIOStates__cdr_serialize,
  _SystemIOStates__cdr_deserialize,
  _SystemIOStates__get_serialized_size,
  _SystemIOStates__max_serialized_size
};

static rosidl_message_type_support_t _SystemIOStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SystemIOStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hiwin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hiwin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hiwin_msgs::msg::SystemIOStates>()
{
  return &hiwin_msgs::msg::typesupport_fastrtps_cpp::_SystemIOStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hiwin_msgs, msg, SystemIOStates)() {
  return &hiwin_msgs::msg::typesupport_fastrtps_cpp::_SystemIOStates__handle;
}

#ifdef __cplusplus
}
#endif
