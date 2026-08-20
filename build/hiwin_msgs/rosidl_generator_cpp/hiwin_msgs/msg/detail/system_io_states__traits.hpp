// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__TRAITS_HPP_
#define HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwin_msgs/msg/detail/system_io_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hiwin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemIOStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: breaker
  {
    out << "breaker: ";
    rosidl_generator_traits::value_to_yaml(msg.breaker, out);
    out << ", ";
  }

  // member: e_stop
  {
    out << "e_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop, out);
    out << ", ";
  }

  // member: e_stop2
  {
    out << "e_stop2: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop2, out);
    out << ", ";
  }

  // member: fan_error
  {
    out << "fan_error: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_error, out);
    out << ", ";
  }

  // member: capacitor_error
  {
    out << "capacitor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.capacitor_error, out);
    out << ", ";
  }

  // member: clear_error_notify
  {
    out << "clear_error_notify: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_error_notify, out);
    out << ", ";
  }

  // member: shutdown_notify
  {
    out << "shutdown_notify: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown_notify, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemIOStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: breaker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "breaker: ";
    rosidl_generator_traits::value_to_yaml(msg.breaker, out);
    out << "\n";
  }

  // member: e_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop, out);
    out << "\n";
  }

  // member: e_stop2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stop2: ";
    rosidl_generator_traits::value_to_yaml(msg.e_stop2, out);
    out << "\n";
  }

  // member: fan_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fan_error: ";
    rosidl_generator_traits::value_to_yaml(msg.fan_error, out);
    out << "\n";
  }

  // member: capacitor_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacitor_error: ";
    rosidl_generator_traits::value_to_yaml(msg.capacitor_error, out);
    out << "\n";
  }

  // member: clear_error_notify
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear_error_notify: ";
    rosidl_generator_traits::value_to_yaml(msg.clear_error_notify, out);
    out << "\n";
  }

  // member: shutdown_notify
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shutdown_notify: ";
    rosidl_generator_traits::value_to_yaml(msg.shutdown_notify, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemIOStates & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hiwin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hiwin_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hiwin_msgs::msg::SystemIOStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::msg::SystemIOStates & msg)
{
  return hiwin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::msg::SystemIOStates>()
{
  return "hiwin_msgs::msg::SystemIOStates";
}

template<>
inline const char * name<hiwin_msgs::msg::SystemIOStates>()
{
  return "hiwin_msgs/msg/SystemIOStates";
}

template<>
struct has_fixed_size<hiwin_msgs::msg::SystemIOStates>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<hiwin_msgs::msg::SystemIOStates>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<hiwin_msgs::msg::SystemIOStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__TRAITS_HPP_
