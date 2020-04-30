// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_HPP_

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

// Include directives for member types
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__struct.hpp"
// Member 'acceleration'
#include "nourish_robot_arm_msgs/msg/acceleration__struct.hpp"
// Member 'zone'
#include "nourish_robot_arm_msgs/msg/zone__struct.hpp"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.hpp"
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__struct.hpp"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.hpp"
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__msg__RobotMove __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__msg__RobotMove __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMove_
{
  using Type = RobotMove_<ContainerAllocator>;

  explicit RobotMove_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : speed(_init),
    acceleration(_init),
    zone(_init),
    tool(_init),
    work_object(_init),
    pose(_init),
    joint(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->interpolation = 0;
      this->target_type = 0;
    }
  }

  explicit RobotMove_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : speed(_alloc, _init),
    acceleration(_alloc, _init),
    zone(_alloc, _init),
    tool(_alloc, _init),
    work_object(_alloc, _init),
    pose(_alloc, _init),
    joint(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->interpolation = 0;
      this->target_type = 0;
    }
  }

  // field types and members
  using _speed_type =
    nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _acceleration_type =
    nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _zone_type =
    nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator>;
  _zone_type zone;
  using _tool_type =
    nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>;
  _tool_type tool;
  using _work_object_type =
    nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>;
  _work_object_type work_object;
  using _interpolation_type =
    uint8_t;
  _interpolation_type interpolation;
  using _target_type_type =
    uint8_t;
  _target_type_type target_type;
  using _pose_type =
    nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _joint_type =
    nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>;
  _joint_type joint;

  // setters for named parameter idiom
  Type & set__speed(
    const nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const nourish_robot_arm_msgs::msg::Acceleration_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__zone(
    const nourish_robot_arm_msgs::msg::Zone_<ContainerAllocator> & _arg)
  {
    this->zone = _arg;
    return *this;
  }
  Type & set__tool(
    const nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> & _arg)
  {
    this->tool = _arg;
    return *this;
  }
  Type & set__work_object(
    const nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> & _arg)
  {
    this->work_object = _arg;
    return *this;
  }
  Type & set__interpolation(
    const uint8_t & _arg)
  {
    this->interpolation = _arg;
    return *this;
  }
  Type & set__target_type(
    const uint8_t & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__pose(
    const nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__joint(
    const nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->joint = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INTERPOLATION_JOINT =
    0u;
  static constexpr uint8_t INTERPOLATION_POSE =
    1u;
  static constexpr uint8_t TARGET_TYPE_JOINT =
    0u;
  static constexpr uint8_t TARGET_TYPE_POSE =
    1u;

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__RobotMove
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__msg__RobotMove
    std::shared_ptr<nourish_robot_arm_msgs::msg::RobotMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->zone != other.zone) {
      return false;
    }
    if (this->tool != other.tool) {
      return false;
    }
    if (this->work_object != other.work_object) {
      return false;
    }
    if (this->interpolation != other.interpolation) {
      return false;
    }
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_

// alias to use template instance with default allocator
using RobotMove =
  nourish_robot_arm_msgs::msg::RobotMove_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RobotMove_<ContainerAllocator>::INTERPOLATION_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t RobotMove_<ContainerAllocator>::INTERPOLATION_POSE;
template<typename ContainerAllocator>
constexpr uint8_t RobotMove_<ContainerAllocator>::TARGET_TYPE_JOINT;
template<typename ContainerAllocator>
constexpr uint8_t RobotMove_<ContainerAllocator>::TARGET_TYPE_POSE;

}  // namespace msg

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_HPP_
