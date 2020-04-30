// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/Tool.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__Tool __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__Tool __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tool_
{
  using Type = Tool_<ContainerAllocator>;

  explicit Tool_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->q4 = 0.0f;
    }
  }

  explicit Tool_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->q4 = 0.0f;
    }
  }

  // field types and members
  using _robhold_type =
    bool;
  _robhold_type robhold;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _q1_type =
    float;
  _q1_type q1;
  using _q2_type =
    float;
  _q2_type q2;
  using _q3_type =
    float;
  _q3_type q3;
  using _q4_type =
    float;
  _q4_type q4;

  // setters for named parameter idiom
  Type & set__robhold(
    const bool & _arg)
  {
    this->robhold = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__q1(
    const float & _arg)
  {
    this->q1 = _arg;
    return *this;
  }
  Type & set__q2(
    const float & _arg)
  {
    this->q2 = _arg;
    return *this;
  }
  Type & set__q3(
    const float & _arg)
  {
    this->q3 = _arg;
    return *this;
  }
  Type & set__q4(
    const float & _arg)
  {
    this->q4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Tool
    std::shared_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Tool
    std::shared_ptr<nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tool_ & other) const
  {
    if (this->robhold != other.robhold) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->q1 != other.q1) {
      return false;
    }
    if (this->q2 != other.q2) {
      return false;
    }
    if (this->q3 != other.q3) {
      return false;
    }
    if (this->q4 != other.q4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tool_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tool_

// alias to use template instance with default allocator
using Tool =
  nourish_robot_arm_msgs::msg::Tool_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_HPP_
