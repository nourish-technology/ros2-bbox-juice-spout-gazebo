// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__WorkObject __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__WorkObject __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorkObject_
{
  using Type = WorkObject_<ContainerAllocator>;

  explicit WorkObject_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->uframe_pos_x = 0.0f;
      this->uframe_pos_y = 0.0f;
      this->uframe_pos_z = 0.0f;
      this->uframe_orient_q1 = 0.0f;
      this->uframe_orient_q2 = 0.0f;
      this->uframe_orient_q3 = 0.0f;
      this->uframe_orient_q4 = 0.0f;
      this->oframe_pos_x = 0.0f;
      this->oframe_pos_y = 0.0f;
      this->oframe_pos_z = 0.0f;
      this->oframe_orient_q1 = 0.0f;
      this->oframe_orient_q2 = 0.0f;
      this->oframe_orient_q3 = 0.0f;
      this->oframe_orient_q4 = 0.0f;
    }
  }

  explicit WorkObject_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->uframe_pos_x = 0.0f;
      this->uframe_pos_y = 0.0f;
      this->uframe_pos_z = 0.0f;
      this->uframe_orient_q1 = 0.0f;
      this->uframe_orient_q2 = 0.0f;
      this->uframe_orient_q3 = 0.0f;
      this->uframe_orient_q4 = 0.0f;
      this->oframe_pos_x = 0.0f;
      this->oframe_pos_y = 0.0f;
      this->oframe_pos_z = 0.0f;
      this->oframe_orient_q1 = 0.0f;
      this->oframe_orient_q2 = 0.0f;
      this->oframe_orient_q3 = 0.0f;
      this->oframe_orient_q4 = 0.0f;
    }
  }

  // field types and members
  using _robhold_type =
    bool;
  _robhold_type robhold;
  using _uframe_pos_x_type =
    float;
  _uframe_pos_x_type uframe_pos_x;
  using _uframe_pos_y_type =
    float;
  _uframe_pos_y_type uframe_pos_y;
  using _uframe_pos_z_type =
    float;
  _uframe_pos_z_type uframe_pos_z;
  using _uframe_orient_q1_type =
    float;
  _uframe_orient_q1_type uframe_orient_q1;
  using _uframe_orient_q2_type =
    float;
  _uframe_orient_q2_type uframe_orient_q2;
  using _uframe_orient_q3_type =
    float;
  _uframe_orient_q3_type uframe_orient_q3;
  using _uframe_orient_q4_type =
    float;
  _uframe_orient_q4_type uframe_orient_q4;
  using _oframe_pos_x_type =
    float;
  _oframe_pos_x_type oframe_pos_x;
  using _oframe_pos_y_type =
    float;
  _oframe_pos_y_type oframe_pos_y;
  using _oframe_pos_z_type =
    float;
  _oframe_pos_z_type oframe_pos_z;
  using _oframe_orient_q1_type =
    float;
  _oframe_orient_q1_type oframe_orient_q1;
  using _oframe_orient_q2_type =
    float;
  _oframe_orient_q2_type oframe_orient_q2;
  using _oframe_orient_q3_type =
    float;
  _oframe_orient_q3_type oframe_orient_q3;
  using _oframe_orient_q4_type =
    float;
  _oframe_orient_q4_type oframe_orient_q4;

  // setters for named parameter idiom
  Type & set__robhold(
    const bool & _arg)
  {
    this->robhold = _arg;
    return *this;
  }
  Type & set__uframe_pos_x(
    const float & _arg)
  {
    this->uframe_pos_x = _arg;
    return *this;
  }
  Type & set__uframe_pos_y(
    const float & _arg)
  {
    this->uframe_pos_y = _arg;
    return *this;
  }
  Type & set__uframe_pos_z(
    const float & _arg)
  {
    this->uframe_pos_z = _arg;
    return *this;
  }
  Type & set__uframe_orient_q1(
    const float & _arg)
  {
    this->uframe_orient_q1 = _arg;
    return *this;
  }
  Type & set__uframe_orient_q2(
    const float & _arg)
  {
    this->uframe_orient_q2 = _arg;
    return *this;
  }
  Type & set__uframe_orient_q3(
    const float & _arg)
  {
    this->uframe_orient_q3 = _arg;
    return *this;
  }
  Type & set__uframe_orient_q4(
    const float & _arg)
  {
    this->uframe_orient_q4 = _arg;
    return *this;
  }
  Type & set__oframe_pos_x(
    const float & _arg)
  {
    this->oframe_pos_x = _arg;
    return *this;
  }
  Type & set__oframe_pos_y(
    const float & _arg)
  {
    this->oframe_pos_y = _arg;
    return *this;
  }
  Type & set__oframe_pos_z(
    const float & _arg)
  {
    this->oframe_pos_z = _arg;
    return *this;
  }
  Type & set__oframe_orient_q1(
    const float & _arg)
  {
    this->oframe_orient_q1 = _arg;
    return *this;
  }
  Type & set__oframe_orient_q2(
    const float & _arg)
  {
    this->oframe_orient_q2 = _arg;
    return *this;
  }
  Type & set__oframe_orient_q3(
    const float & _arg)
  {
    this->oframe_orient_q3 = _arg;
    return *this;
  }
  Type & set__oframe_orient_q4(
    const float & _arg)
  {
    this->oframe_orient_q4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__WorkObject
    std::shared_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__WorkObject
    std::shared_ptr<nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorkObject_ & other) const
  {
    if (this->robhold != other.robhold) {
      return false;
    }
    if (this->uframe_pos_x != other.uframe_pos_x) {
      return false;
    }
    if (this->uframe_pos_y != other.uframe_pos_y) {
      return false;
    }
    if (this->uframe_pos_z != other.uframe_pos_z) {
      return false;
    }
    if (this->uframe_orient_q1 != other.uframe_orient_q1) {
      return false;
    }
    if (this->uframe_orient_q2 != other.uframe_orient_q2) {
      return false;
    }
    if (this->uframe_orient_q3 != other.uframe_orient_q3) {
      return false;
    }
    if (this->uframe_orient_q4 != other.uframe_orient_q4) {
      return false;
    }
    if (this->oframe_pos_x != other.oframe_pos_x) {
      return false;
    }
    if (this->oframe_pos_y != other.oframe_pos_y) {
      return false;
    }
    if (this->oframe_pos_z != other.oframe_pos_z) {
      return false;
    }
    if (this->oframe_orient_q1 != other.oframe_orient_q1) {
      return false;
    }
    if (this->oframe_orient_q2 != other.oframe_orient_q2) {
      return false;
    }
    if (this->oframe_orient_q3 != other.oframe_orient_q3) {
      return false;
    }
    if (this->oframe_orient_q4 != other.oframe_orient_q4) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorkObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorkObject_

// alias to use template instance with default allocator
using WorkObject =
  nourish_robot_arm_msgs::msg::WorkObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_HPP_
