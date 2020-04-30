// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__Zone __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__Zone __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Zone_
{
  using Type = Zone_<ContainerAllocator>;

  explicit Zone_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->fine_point = false;
      this->pzone_eax = 0.0f;
      this->pzone_ori = 0.0f;
      this->pzone_tcp = 0.0f;
      this->leax = 0.0f;
      this->ori = 0.0f;
      this->reax = 0.0f;
    }
  }

  explicit Zone_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->fine_point = false;
      this->pzone_eax = 0.0f;
      this->pzone_ori = 0.0f;
      this->pzone_tcp = 0.0f;
      this->leax = 0.0f;
      this->ori = 0.0f;
      this->reax = 0.0f;
    }
  }

  // field types and members
  using _fine_point_type =
    bool;
  _fine_point_type fine_point;
  using _pzone_eax_type =
    float;
  _pzone_eax_type pzone_eax;
  using _pzone_ori_type =
    float;
  _pzone_ori_type pzone_ori;
  using _pzone_tcp_type =
    float;
  _pzone_tcp_type pzone_tcp;
  using _leax_type =
    float;
  _leax_type leax;
  using _ori_type =
    float;
  _ori_type ori;
  using _reax_type =
    float;
  _reax_type reax;

  // setters for named parameter idiom
  Type & set__fine_point(
    const bool & _arg)
  {
    this->fine_point = _arg;
    return *this;
  }
  Type & set__pzone_eax(
    const float & _arg)
  {
    this->pzone_eax = _arg;
    return *this;
  }
  Type & set__pzone_ori(
    const float & _arg)
  {
    this->pzone_ori = _arg;
    return *this;
  }
  Type & set__pzone_tcp(
    const float & _arg)
  {
    this->pzone_tcp = _arg;
    return *this;
  }
  Type & set__leax(
    const float & _arg)
  {
    this->leax = _arg;
    return *this;
  }
  Type & set__ori(
    const float & _arg)
  {
    this->ori = _arg;
    return *this;
  }
  Type & set__reax(
    const float & _arg)
  {
    this->reax = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Zone
    std::shared_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__Zone
    std::shared_ptr<nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Zone_ & other) const
  {
    if (this->fine_point != other.fine_point) {
      return false;
    }
    if (this->pzone_eax != other.pzone_eax) {
      return false;
    }
    if (this->pzone_ori != other.pzone_ori) {
      return false;
    }
    if (this->pzone_tcp != other.pzone_tcp) {
      return false;
    }
    if (this->leax != other.leax) {
      return false;
    }
    if (this->ori != other.ori) {
      return false;
    }
    if (this->reax != other.reax) {
      return false;
    }
    return true;
  }
  bool operator!=(const Zone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Zone_

// alias to use template instance with default allocator
using Zone =
  nourish_robot_arm_msgs::msg::Zone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_HPP_
