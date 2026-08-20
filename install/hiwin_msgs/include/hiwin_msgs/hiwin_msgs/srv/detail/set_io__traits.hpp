// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwin_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
#define HIWIN_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwin_msgs/srv/detail/set_io__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hiwin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: io_group
  {
    out << "io_group: ";
    rosidl_generator_traits::value_to_yaml(msg.io_group, out);
    out << ", ";
  }

  // member: interface_name
  {
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: io_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_group: ";
    rosidl_generator_traits::value_to_yaml(msg.io_group, out);
    out << "\n";
  }

  // member: interface_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetIO_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hiwin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hiwin_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hiwin_msgs::srv::SetIO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::srv::SetIO_Request & msg)
{
  return hiwin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::srv::SetIO_Request>()
{
  return "hiwin_msgs::srv::SetIO_Request";
}

template<>
inline const char * name<hiwin_msgs::srv::SetIO_Request>()
{
  return "hiwin_msgs/srv/SetIO_Request";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwin_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwin_msgs::srv::SetIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hiwin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetIO_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetIO_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace hiwin_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hiwin_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hiwin_msgs::srv::SetIO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::srv::SetIO_Response & msg)
{
  return hiwin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::srv::SetIO_Response>()
{
  return "hiwin_msgs::srv::SetIO_Response";
}

template<>
inline const char * name<hiwin_msgs::srv::SetIO_Response>()
{
  return "hiwin_msgs/srv/SetIO_Response";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwin_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwin_msgs::srv::SetIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hiwin_msgs::srv::SetIO>()
{
  return "hiwin_msgs::srv::SetIO";
}

template<>
inline const char * name<hiwin_msgs::srv::SetIO>()
{
  return "hiwin_msgs/srv/SetIO";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_fixed_size<hiwin_msgs::srv::SetIO_Request>::value &&
    has_fixed_size<hiwin_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<hiwin_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_bounded_size<hiwin_msgs::srv::SetIO_Request>::value &&
    has_bounded_size<hiwin_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct is_service<hiwin_msgs::srv::SetIO>
  : std::true_type
{
};

template<>
struct is_service_request<hiwin_msgs::srv::SetIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hiwin_msgs::srv::SetIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HIWIN_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
