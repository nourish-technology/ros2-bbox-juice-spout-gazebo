// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__JOINT__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__JOINT__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__Joint __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__Joint __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joint_
{
  using Type = Joint_<ContainerAllocator>;

  explicit Joint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0f;
      this->j2 = 0.0f;
      this->j3 = 0.0f;
      this->j4 = 0.0f;
      this->j5 = 0.0f;
      this->j6 = 0.0f;
    }
  }

  explicit Joint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->j1 = 0.0f;
      this->j2 = 0.0f;
      this->j3 = 0.0f;
      this->j4 = 0.0f;
      this->j5 = 0.0f;
      this->j6 = 0.0f;
    }
  }

  // field types and members
  using _j1_type =
    float;
  _j1_type j1;
  using _j2_type =
    float;
  _j2_type j2;
  using _j3_type =
    float;
  _j3_type j3;
  using _j4_type =
    float;
  _j4_type j4;
  using _j5_type =
    float;
  _j5_type j5;
  using _j6_type =
    float;
  _j6_type j6;

  // setters for named parameter idiom
  Type & set__j1(
    const float & _arg)
  {
    this->j1 = _arg;
    return *this;
  }
  Type & set__j2(
    const float & _arg)
  {
    this->j2 = _arg;
    return *this;
  }
  Type & set__j3(
    const float & _arg)
  {
    this->j3 = _arg;
    return *this;
  }
  Type & set__j4(
    const float & _arg)
  {
    this->j4 = _arg;
    return *this;
  }
  Type & set__j5(
    const float & _arg)
  {
    this->j5 = _arg;
    return *this;
  }
  Type & set__j6(
    const float & _arg)
  {
    this->j6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Joint
    std::shared_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Joint
    std::shared_ptr<nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joint_ & other) const
  {
    if (this->j1 != other.j1) {
      return false;
    }
    if (this->j2 != other.j2) {
      return false;
    }
    if (this->j3 != other.j3) {
      return false;
    }
    if (this->j4 != other.j4) {
      return false;
    }
    if (this->j5 != other.j5) {
      return false;
    }
    if (this->j6 != other.j6) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joint_

// alias to use template instance with default allocator
using Joint =
  nourish_robot_arm_msgs::msg::Joint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__JOINT__STRUCT_HPP_
