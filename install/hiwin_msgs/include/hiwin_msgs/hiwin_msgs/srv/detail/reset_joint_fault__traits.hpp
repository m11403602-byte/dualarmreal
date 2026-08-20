// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hiwin_msgs:srv/ResetJointFault.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__TRAITS_HPP_
#define HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hiwin_msgs/srv/detail/reset_joint_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hiwin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetJointFault_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetJointFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetJointFault_Request & msg, bool use_flow_style = false)
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
  const hiwin_msgs::srv::ResetJointFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::srv::ResetJointFault_Request & msg)
{
  return hiwin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::srv::ResetJointFault_Request>()
{
  return "hiwin_msgs::srv::ResetJointFault_Request";
}

template<>
inline const char * name<hiwin_msgs::srv::ResetJointFault_Request>()
{
  return "hiwin_msgs/srv/ResetJointFault_Request";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::ResetJointFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwin_msgs::srv::ResetJointFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwin_msgs::srv::ResetJointFault_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hiwin_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetJointFault_Response & msg,
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
  const ResetJointFault_Response & msg,
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

inline std::string to_yaml(const ResetJointFault_Response & msg, bool use_flow_style = false)
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
  const hiwin_msgs::srv::ResetJointFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hiwin_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hiwin_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hiwin_msgs::srv::ResetJointFault_Response & msg)
{
  return hiwin_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hiwin_msgs::srv::ResetJointFault_Response>()
{
  return "hiwin_msgs::srv::ResetJointFault_Response";
}

template<>
inline const char * name<hiwin_msgs::srv::ResetJointFault_Response>()
{
  return "hiwin_msgs/srv/ResetJointFault_Response";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::ResetJointFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hiwin_msgs::srv::ResetJointFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hiwin_msgs::srv::ResetJointFault_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hiwin_msgs::srv::ResetJointFault>()
{
  return "hiwin_msgs::srv::ResetJointFault";
}

template<>
inline const char * name<hiwin_msgs::srv::ResetJointFault>()
{
  return "hiwin_msgs/srv/ResetJointFault";
}

template<>
struct has_fixed_size<hiwin_msgs::srv::ResetJointFault>
  : std::integral_constant<
    bool,
    has_fixed_size<hiwin_msgs::srv::ResetJointFault_Request>::value &&
    has_fixed_size<hiwin_msgs::srv::ResetJointFault_Response>::value
  >
{
};

template<>
struct has_bounded_size<hiwin_msgs::srv::ResetJointFault>
  : std::integral_constant<
    bool,
    has_bounded_size<hiwin_msgs::srv::ResetJointFault_Request>::value &&
    has_bounded_size<hiwin_msgs::srv::ResetJointFault_Response>::value
  >
{
};

template<>
struct is_service<hiwin_msgs::srv::ResetJointFault>
  : std::true_type
{
};

template<>
struct is_service_request<hiwin_msgs::srv::ResetJointFault_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hiwin_msgs::srv::ResetJointFault_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__TRAITS_HPP_
