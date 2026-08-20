// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__BUILDER_HPP_
#define HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwin_msgs/msg/detail/system_io_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwin_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemIOStates_shutdown_notify
{
public:
  explicit Init_SystemIOStates_shutdown_notify(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  ::hiwin_msgs::msg::SystemIOStates shutdown_notify(::hiwin_msgs::msg::SystemIOStates::_shutdown_notify_type arg)
  {
    msg_.shutdown_notify = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_clear_error_notify
{
public:
  explicit Init_SystemIOStates_clear_error_notify(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_shutdown_notify clear_error_notify(::hiwin_msgs::msg::SystemIOStates::_clear_error_notify_type arg)
  {
    msg_.clear_error_notify = std::move(arg);
    return Init_SystemIOStates_shutdown_notify(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_capacitor_error
{
public:
  explicit Init_SystemIOStates_capacitor_error(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_clear_error_notify capacitor_error(::hiwin_msgs::msg::SystemIOStates::_capacitor_error_type arg)
  {
    msg_.capacitor_error = std::move(arg);
    return Init_SystemIOStates_clear_error_notify(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_fan_error
{
public:
  explicit Init_SystemIOStates_fan_error(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_capacitor_error fan_error(::hiwin_msgs::msg::SystemIOStates::_fan_error_type arg)
  {
    msg_.fan_error = std::move(arg);
    return Init_SystemIOStates_capacitor_error(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_e_stop2
{
public:
  explicit Init_SystemIOStates_e_stop2(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_fan_error e_stop2(::hiwin_msgs::msg::SystemIOStates::_e_stop2_type arg)
  {
    msg_.e_stop2 = std::move(arg);
    return Init_SystemIOStates_fan_error(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_e_stop
{
public:
  explicit Init_SystemIOStates_e_stop(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_e_stop2 e_stop(::hiwin_msgs::msg::SystemIOStates::_e_stop_type arg)
  {
    msg_.e_stop = std::move(arg);
    return Init_SystemIOStates_e_stop2(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_breaker
{
public:
  explicit Init_SystemIOStates_breaker(::hiwin_msgs::msg::SystemIOStates & msg)
  : msg_(msg)
  {}
  Init_SystemIOStates_e_stop breaker(::hiwin_msgs::msg::SystemIOStates::_breaker_type arg)
  {
    msg_.breaker = std::move(arg);
    return Init_SystemIOStates_e_stop(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

class Init_SystemIOStates_stamp
{
public:
  Init_SystemIOStates_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemIOStates_breaker stamp(::hiwin_msgs::msg::SystemIOStates::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_SystemIOStates_breaker(msg_);
  }

private:
  ::hiwin_msgs::msg::SystemIOStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::msg::SystemIOStates>()
{
  return hiwin_msgs::msg::builder::Init_SystemIOStates_stamp();
}

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__BUILDER_HPP_
