// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__BUILDER_HPP_
#define HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hiwin_msgs/msg/detail/digital_io_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hiwin_msgs
{

namespace msg
{

namespace builder
{

class Init_DigitalIOStates_di_values
{
public:
  explicit Init_DigitalIOStates_di_values(::hiwin_msgs::msg::DigitalIOStates & msg)
  : msg_(msg)
  {}
  ::hiwin_msgs::msg::DigitalIOStates di_values(::hiwin_msgs::msg::DigitalIOStates::_di_values_type arg)
  {
    msg_.di_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hiwin_msgs::msg::DigitalIOStates msg_;
};

class Init_DigitalIOStates_di_names
{
public:
  explicit Init_DigitalIOStates_di_names(::hiwin_msgs::msg::DigitalIOStates & msg)
  : msg_(msg)
  {}
  Init_DigitalIOStates_di_values di_names(::hiwin_msgs::msg::DigitalIOStates::_di_names_type arg)
  {
    msg_.di_names = std::move(arg);
    return Init_DigitalIOStates_di_values(msg_);
  }

private:
  ::hiwin_msgs::msg::DigitalIOStates msg_;
};

class Init_DigitalIOStates_stamp
{
public:
  Init_DigitalIOStates_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DigitalIOStates_di_names stamp(::hiwin_msgs::msg::DigitalIOStates::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_DigitalIOStates_di_names(msg_);
  }

private:
  ::hiwin_msgs::msg::DigitalIOStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hiwin_msgs::msg::DigitalIOStates>()
{
  return hiwin_msgs::msg::builder::Init_DigitalIOStates_stamp();
}

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__BUILDER_HPP_
