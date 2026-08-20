// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__TRAITS_HPP_
#define HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwin_msgs/msg/detail/digital_io_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace hiwin_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DigitalIOStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: di_names
  {
    if (msg.di_names.size() == 0) {
      out << "di_names: []";
    } else {
      out << "di_names: [";
      size_t pending_items = msg.di_names.size();
      for (auto item : msg.di_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: di_values
  {
    if (msg.di_values.size() == 0) {
      out << "di_values: []";
    } else {
      out << "di_values: [";
      size_t pending_items = msg.di_values.size();
      for (auto item : msg.di_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DigitalIOStates & msg,
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

  // member: di_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.di_names.size() == 0) {
      out << "di_names: []\n";
    } else {
      out << "di_names:\n";
      for (auto item : msg.di_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: di_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.di_values.size() == 0) {
      out << "di_values: []\n";
    } else {
      out << "di_values:\n";
      for (auto item : msg.di_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DigitalIOStates & msg, bool use_flow_style = false)
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
  const hiwin_msgs::msg::DigitalIOStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::msg::DigitalIOStates & msg)
{
  return hiwin_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::msg::DigitalIOStates>()
{
  return "hiwin_msgs::msg::DigitalIOStates";
}

template<>
inline const char * name<hiwin_msgs::msg::DigitalIOStates>()
{
  return "hiwin_msgs/msg/DigitalIOStates";
}

template<>
struct has_fixed_size<hiwin_msgs::msg::DigitalIOStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwin_msgs::msg::DigitalIOStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwin_msgs::msg::DigitalIOStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__TRAITS_HPP_
