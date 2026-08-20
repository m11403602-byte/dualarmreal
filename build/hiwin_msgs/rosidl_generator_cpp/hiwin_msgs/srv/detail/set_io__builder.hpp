// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwin_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_
#define HIWIN_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwin_msgs/srv/detail/set_io__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetIO_Request_value
{
public:
  explicit Init_SetIO_Request_value(::hiwin_msgs::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  ::hiwin_msgs::srv::SetIO_Request value(::hiwin_msgs::srv::SetIO_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_interface_name
{
public:
  explicit Init_SetIO_Request_interface_name(::hiwin_msgs::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetIO_Request_value interface_name(::hiwin_msgs::srv::SetIO_Request::_interface_name_type arg)
  {
    msg_.interface_name = std::move(arg);
    return Init_SetIO_Request_value(msg_);
  }

private:
  ::hiwin_msgs::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_io_group
{
public:
  Init_SetIO_Request_io_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIO_Request_interface_name io_group(::hiwin_msgs::srv::SetIO_Request::_io_group_type arg)
  {
    msg_.io_group = std::move(arg);
    return Init_SetIO_Request_interface_name(msg_);
  }

private:
  ::hiwin_msgs::srv::SetIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::srv::SetIO_Request>()
{
  return hiwin_msgs::srv::builder::Init_SetIO_Request_io_group();
}

}  // namespace hiwin_msgs


namespace hiwin_msgs
{

namespace srv
{

namespace builder
{

class Init_SetIO_Response_message
{
public:
  explicit Init_SetIO_Response_message(::hiwin_msgs::srv::SetIO_Response & msg)
  : msg_(msg)
  {}
  ::hiwin_msgs::srv::SetIO_Response message(::hiwin_msgs::srv::SetIO_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::srv::SetIO_Response msg_;
};

class Init_SetIO_Response_success
{
public:
  Init_SetIO_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIO_Response_message success(::hiwin_msgs::srv::SetIO_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetIO_Response_message(msg_);
  }

private:
  ::hiwin_msgs::srv::SetIO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::srv::SetIO_Response>()
{
  return hiwin_msgs::srv::builder::Init_SetIO_Response_success();
}

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_
