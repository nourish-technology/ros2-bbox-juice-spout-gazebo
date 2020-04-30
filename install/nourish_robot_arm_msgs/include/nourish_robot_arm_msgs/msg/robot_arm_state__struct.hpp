// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__msg__RobotArmState __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__RobotArmState __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArmState_
{
  using Type = RobotArmState_<ContainerAllocator>;

  explicit RobotArmState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->motion_program_is_running = false;
      this->registration_sensor_is_activated = false;
      this->is_waiting = false;
    }
  }

  explicit RobotArmState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_connected = false;
      this->motion_program_is_running = false;
      this->registration_sensor_is_activated = false;
      this->is_waiting = false;
    }
  }

  // field types and members
  using _is_connected_type =
    bool;
  _is_connected_type is_connected;
  using _motion_program_is_running_type =
    bool;
  _motion_program_is_running_type motion_program_is_running;
  using _registration_sensor_is_activated_type =
    bool;
  _registration_sensor_is_activated_type registration_sensor_is_activated;
  using _is_waiting_type =
    bool;
  _is_waiting_type is_waiting;

  // setters for named parameter idiom
  Type & set__is_connected(
    const bool & _arg)
  {
    this->is_connected = _arg;
    return *this;
  }
  Type & set__motion_program_is_running(
    const bool & _arg)
  {
    this->motion_program_is_running = _arg;
    return *this;
  }
  Type & set__registration_sensor_is_activated(
    const bool & _arg)
  {
    this->registration_sensor_is_activated = _arg;
    return *this;
  }
  Type & set__is_waiting(
    const bool & _arg)
  {
    this->is_waiting = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__RobotArmState
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__RobotArmState
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArmState_ & other) const
  {
    if (this->is_connected != other.is_connected) {
      return false;
    }
    if (this->motion_program_is_running != other.motion_program_is_running) {
      return false;
    }
    if (this->registration_sensor_is_activated != other.registration_sensor_is_activated) {
      return false;
    }
    if (this->is_waiting != other.is_waiting) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArmState_

// alias to use template instance with default allocator
using RobotArmState =
  nourish_robot_arm_msgs::msg::RobotArmState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_HPP_
