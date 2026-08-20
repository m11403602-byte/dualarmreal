// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hiwin_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_HPP_
#define HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_HPP_

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
# define DEPRECATED__hiwin_msgs__msg__DigitalIOStates __attribute__((deprecated))
#else
# define DEPRECATED__hiwin_msgs__msg__DigitalIOStates __declspec(deprecated)
#endif

namespace hiwin_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DigitalIOStates_
{
  using Type = DigitalIOStates_<ContainerAllocator>;

  explicit DigitalIOStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit DigitalIOStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _di_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _di_names_type di_names;
  using _di_values_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _di_values_type di_values;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__di_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->di_names = _arg;
    return *this;
  }
  Type & set__di_values(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->di_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hiwin_msgs__msg__DigitalIOStates
    std::shared_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hiwin_msgs__msg__DigitalIOStates
    std::shared_ptr<hiwin_msgs::msg::DigitalIOStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DigitalIOStates_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->di_names != other.di_names) {
      return false;
    }
    if (this->di_values != other.di_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const DigitalIOStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DigitalIOStates_

// alias to use template instance with default allocator
using DigitalIOStates =
  hiwin_msgs::msg::DigitalIOStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hiwin_msgs

#endif  // HIWIN_MSGS__MSG__DETAIL__DIGITAL_IO_STATES__STRUCT_HPP_
