// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_HPP_

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
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__struct.hpp"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Request __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PollPosition_Request_
{
  using Type = PollPosition_Request_<ContainerAllocator>;

  explicit PollPosition_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : work_object(_init),
    tool(_init)
  {
    (void)_init;
  }

  explicit PollPosition_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : work_object(_alloc, _init),
    tool(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _work_object_type =
    nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator>;
  _work_object_type work_object;
  using _tool_type =
    nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>;
  _tool_type tool;

  // setters for named parameter idiom
  Type & set__work_object(
    const nourish_robot_arm_msgs::msg::WorkObject_<ContainerAllocator> & _arg)
  {
    this->work_object = _arg;
    return *this;
  }
  Type & set__tool(
    const nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> & _arg)
  {
    this->tool = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Request
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Request
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PollPosition_Request_ & other) const
  {
    if (this->work_object != other.work_object) {
      return false;
    }
    if (this->tool != other.tool) {
      return false;
    }
    return true;
  }
  bool operator!=(const PollPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PollPosition_Request_

// alias to use template instance with default allocator
using PollPosition_Request =
  nourish_robot_arm_msgs::srv::PollPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

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
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__struct.hpp"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Response __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PollPosition_Response_
{
  using Type = PollPosition_Response_<ContainerAllocator>;

  explicit PollPosition_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : joint(_init),
    pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit PollPosition_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : joint(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;
  using _joint_type =
    nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator>;
  _joint_type joint;
  using _pose_type =
    nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__joint(
    const nourish_robot_arm_msgs::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__pose(
    const nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_UNKNOWN_DO_NOT_USE =
    0u;
  static constexpr uint8_t RESULT_SUCCESS =
    1u;
  static constexpr uint8_t RESULT_ERROR_UNHEALTHY =
    2u;
  static constexpr uint8_t RESULT_ERROR_BUSY =
    3u;
  static constexpr uint8_t RESULT_ERROR_UNKNOWN =
    4u;

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Response
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollPosition_Response
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PollPosition_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PollPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PollPosition_Response_

// alias to use template instance with default allocator
using PollPosition_Response =
  nourish_robot_arm_msgs::srv::PollPosition_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PollPosition_Response_<ContainerAllocator>::RESULT_UNKNOWN_DO_NOT_USE;
template<typename ContainerAllocator>
constexpr uint8_t PollPosition_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t PollPosition_Response_<ContainerAllocator>::RESULT_ERROR_UNHEALTHY;
template<typename ContainerAllocator>
constexpr uint8_t PollPosition_Response_<ContainerAllocator>::RESULT_ERROR_BUSY;
template<typename ContainerAllocator>
constexpr uint8_t PollPosition_Response_<ContainerAllocator>::RESULT_ERROR_UNKNOWN;

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{

namespace srv
{

struct PollPosition
{
  using Request = nourish_robot_arm_msgs::srv::PollPosition_Request;
  using Response = nourish_robot_arm_msgs::srv::PollPosition_Response;
};

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_HPP_
