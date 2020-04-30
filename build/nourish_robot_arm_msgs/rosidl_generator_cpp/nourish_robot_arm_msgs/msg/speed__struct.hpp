// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__Speed __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__Speed __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Speed_
{
  using Type = Speed_<ContainerAllocator>;

  explicit Speed_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_leax = 0.0f;
      this->v_ori = 0.0f;
      this->v_reax = 0.0f;
      this->v_tcp = 0.0f;
    }
  }

  explicit Speed_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_leax = 0.0f;
      this->v_ori = 0.0f;
      this->v_reax = 0.0f;
      this->v_tcp = 0.0f;
    }
  }

  // field types and members
  using _v_leax_type =
    float;
  _v_leax_type v_leax;
  using _v_ori_type =
    float;
  _v_ori_type v_ori;
  using _v_reax_type =
    float;
  _v_reax_type v_reax;
  using _v_tcp_type =
    float;
  _v_tcp_type v_tcp;

  // setters for named parameter idiom
  Type & set__v_leax(
    const float & _arg)
  {
    this->v_leax = _arg;
    return *this;
  }
  Type & set__v_ori(
    const float & _arg)
  {
    this->v_ori = _arg;
    return *this;
  }
  Type & set__v_reax(
    const float & _arg)
  {
    this->v_reax = _arg;
    return *this;
  }
  Type & set__v_tcp(
    const float & _arg)
  {
    this->v_tcp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Speed
    std::shared_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Speed
    std::shared_ptr<nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Speed_ & other) const
  {
    if (this->v_leax != other.v_leax) {
      return false;
    }
    if (this->v_ori != other.v_ori) {
      return false;
    }
    if (this->v_reax != other.v_reax) {
      return false;
    }
    if (this->v_tcp != other.v_tcp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Speed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Speed_

// alias to use template instance with default allocator
using Speed =
  nourish_robot_arm_msgs::msg::Speed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_HPP_
