// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_HPP_
#define HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hiwin_msgs__msg__SystemIOStates __attribute__((deprecated))
#else
# define DEPRECATED__hiwin_msgs__msg__SystemIOStates __declspec(deprecated)
#endif

namespace hiwin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemIOStates_
{
  using Type = SystemIOStates_<ContainerAllocator>;

  explicit SystemIOStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breaker = false;
      this->e_stop = false;
      this->e_stop2 = false;
      this->fan_error = false;
      this->capacitor_error = false;
      this->clear_error_notify = false;
      this->shutdown_notify = false;
    }
  }

  explicit SystemIOStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->breaker = false;
      this->e_stop = false;
      this->e_stop2 = false;
      this->fan_error = false;
      this->capacitor_error = false;
      this->clear_error_notify = false;
      this->shutdown_notify = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _breaker_type =
    bool;
  _breaker_type breaker;
  using _e_stop_type =
    bool;
  _e_stop_type e_stop;
  using _e_stop2_type =
    bool;
  _e_stop2_type e_stop2;
  using _fan_error_type =
    bool;
  _fan_error_type fan_error;
  using _capacitor_error_type =
    bool;
  _capacitor_error_type capacitor_error;
  using _clear_error_notify_type =
    bool;
  _clear_error_notify_type clear_error_notify;
  using _shutdown_notify_type =
    bool;
  _shutdown_notify_type shutdown_notify;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__breaker(
    const bool & _arg)
  {
    this->breaker = _arg;
    return *this;
  }
  Type & set__e_stop(
    const bool & _arg)
  {
    this->e_stop = _arg;
    return *this;
  }
  Type & set__e_stop2(
    const bool & _arg)
  {
    this->e_stop2 = _arg;
    return *this;
  }
  Type & set__fan_error(
    const bool & _arg)
  {
    this->fan_error = _arg;
    return *this;
  }
  Type & set__capacitor_error(
    const bool & _arg)
  {
    this->capacitor_error = _arg;
    return *this;
  }
  Type & set__clear_error_notify(
    const bool & _arg)
  {
    this->clear_error_notify = _arg;
    return *this;
  }
  Type & set__shutdown_notify(
    const bool & _arg)
  {
    this->shutdown_notify = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwin_msgs__msg__SystemIOStates
    std::shared_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwin_msgs__msg__SystemIOStates
    std::shared_ptr<hiwin_msgs::msg::SystemIOStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemIOStates_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->breaker != other.breaker) {
      return false;
    }
    if (this->e_stop != other.e_stop) {
      return false;
    }
    if (this->e_stop2 != other.e_stop2) {
      return false;
    }
    if (this->fan_error != other.fan_error) {
      return false;
    }
    if (this->capacitor_error != other.capacitor_error) {
      return false;
    }
    if (this->clear_error_notify != other.clear_error_notify) {
      return false;
    }
    if (this->shutdown_notify != other.shutdown_notify) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemIOStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemIOStates_

// alias to use template instance with default allocator
using SystemIOStates =
  hiwin_msgs::msg::SystemIOStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__STRUCT_HPP_
