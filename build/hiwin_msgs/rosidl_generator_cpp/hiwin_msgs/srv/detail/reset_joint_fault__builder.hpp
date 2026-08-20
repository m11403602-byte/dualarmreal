// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwin_msgs:srv/ResetJointFault.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__BUILDER_HPP_
#define HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwin_msgs/srv/detail/reset_joint_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwin_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetJointFault_Request_joint_name
{
public:
  Init_ResetJointFault_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hiwin_msgs::srv::ResetJointFault_Request joint_name(::hiwin_msgs::srv::ResetJointFault_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::srv::ResetJointFault_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::srv::ResetJointFault_Request>()
{
  return hiwin_msgs::srv::builder::Init_ResetJointFault_Request_joint_name();
}

}  // namespace hiwin_msgs


namespace hiwin_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetJointFault_Response_message
{
public:
  explicit Init_ResetJointFault_Response_message(::hiwin_msgs::srv::ResetJointFault_Response & msg)
  : msg_(msg)
  {}
  ::hiwin_msgs::srv::ResetJointFault_Response message(::hiwin_msgs::srv::ResetJointFault_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::srv::ResetJointFault_Response msg_;
};

class Init_ResetJointFault_Response_success
{
public:
  Init_ResetJointFault_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetJointFault_Response_message success(::hiwin_msgs::srv::ResetJointFault_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetJointFault_Response_message(msg_);
  }

private:
  ::hiwin_msgs::srv::ResetJointFault_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::srv::ResetJointFault_Response>()
{
  return hiwin_msgs::srv::builder::Init_ResetJointFault_Response_success();
}

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__SRV__DETAIL__RESET_JOINT_FAULT__BUILDER_HPP_
