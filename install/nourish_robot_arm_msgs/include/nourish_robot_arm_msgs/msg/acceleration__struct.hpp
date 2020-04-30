// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__Acceleration __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__Acceleration __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Acceleration_
{
  using Type = Acceleration_<ContainerAllocator>;

  explicit Acceleration_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
      this->deceleration = 0.0f;
      this->ramp = 0;
    }
  }

  explicit Acceleration_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->acceleration = 0.0f;
      this->deceleration = 0.0f;
      this->ramp = 0;
    }
  }

  // field types and members
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _deceleration_type =
    float;
  _deceleration_type deceleration;
  using _ramp_type =
    uint8_t;
  _ramp_type ramp;

  // setters for named parameter idiom
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__deceleration(
    const float & _arg)
  {
    this->deceleration = _arg;
    return *this;
  }
  Type & set__ramp(
    const uint8_t & _arg)
  {
    this->ramp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Acceleration
    std::shared_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Acceleration
    std::shared_ptr<nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Acceleration_ & other) const
  {
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->deceleration != other.deceleration) {
      return false;
    }
    if (this->ramp != other.ramp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Acceleration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Acceleration_

// alias to use template instance with default allocator
using Acceleration =
  nourish_robot_arm_msgs::msg::Acceleration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_HPP_
