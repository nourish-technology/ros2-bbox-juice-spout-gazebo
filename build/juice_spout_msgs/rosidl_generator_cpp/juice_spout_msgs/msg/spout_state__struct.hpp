// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_HPP_
#define JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__juice_spout_msgs__msg__SpoutState __attribute__((deprecated))
#else
# define DEPRECATED__juice_spout_msgs__msg__SpoutState __declspec(deprecated)
#endif

namespace juice_spout_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpoutState_
{
  using Type = SpoutState_<ContainerAllocator>;

  explicit SpoutState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_healthy = false;
      this->is_busy = false;
      this->fill_level = 0;
    }
  }

  explicit SpoutState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_healthy = false;
      this->is_busy = false;
      this->fill_level = 0;
    }
  }

  // field types and members
  using _is_healthy_type =
    bool;
  _is_healthy_type is_healthy;
  using _is_busy_type =
    bool;
  _is_busy_type is_busy;
  using _fill_level_type =
    uint8_t;
  _fill_level_type fill_level;

  // setters for named parameter idiom
  Type & set__is_healthy(
    const bool & _arg)
  {
    this->is_healthy = _arg;
    return *this;
  }
  Type & set__is_busy(
    const bool & _arg)
  {
    this->is_busy = _arg;
    return *this;
  }
  Type & set__fill_level(
    const uint8_t & _arg)
  {
    this->fill_level = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FILL_LEVEL_DONT_USE =
    0u;
  static constexpr uint8_t FILL_LEVEL_EMPTY =
    1u;
  static constexpr uint8_t FILL_LEVEL_LOW =
    2u;
  static constexpr uint8_t FILL_LEVEL_NOMINAL =
    3u;
  static constexpr uint8_t FILL_LEVEL_UNKNOWN =
    4u;

  // pointer types
  using RawPtr =
    juice_spout_msgs::msg::SpoutState_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_spout_msgs::msg::SpoutState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::msg::SpoutState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::msg::SpoutState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_spout_msgs__msg__SpoutState
    std::shared_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_spout_msgs__msg__SpoutState
    std::shared_ptr<juice_spout_msgs::msg::SpoutState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpoutState_ & other) const
  {
    if (this->is_healthy != other.is_healthy) {
      return false;
    }
    if (this->is_busy != other.is_busy) {
      return false;
    }
    if (this->fill_level != other.fill_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpoutState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpoutState_

// alias to use template instance with default allocator
using SpoutState =
  juice_spout_msgs::msg::SpoutState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SpoutState_<ContainerAllocator>::FILL_LEVEL_DONT_USE;
template<typename ContainerAllocator>
constexpr uint8_t SpoutState_<ContainerAllocator>::FILL_LEVEL_EMPTY;
template<typename ContainerAllocator>
constexpr uint8_t SpoutState_<ContainerAllocator>::FILL_LEVEL_LOW;
template<typename ContainerAllocator>
constexpr uint8_t SpoutState_<ContainerAllocator>::FILL_LEVEL_NOMINAL;
template<typename ContainerAllocator>
constexpr uint8_t SpoutState_<ContainerAllocator>::FILL_LEVEL_UNKNOWN;

}  // namespace msg

}  // namespace juice_spout_msgs

#endif  // JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_HPP_
