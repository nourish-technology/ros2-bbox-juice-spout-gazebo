// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:srv/PollStatus.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_HPP_

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
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Request __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PollStatus_Request_
{
  using Type = PollStatus_Request_<ContainerAllocator>;

  explicit PollStatus_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit PollStatus_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Request
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Request
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PollStatus_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const PollStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PollStatus_Request_

// alias to use template instance with default allocator
using PollStatus_Request =
  nourish_robot_arm_msgs::srv::PollStatus_Request_<std::allocator<void>>;

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
// Member 'state'
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Response __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PollStatus_Response_
{
  using Type = PollStatus_Response_<ContainerAllocator>;

  explicit PollStatus_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit PollStatus_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
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
  using _state_type =
    nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__state(
    const nourish_robot_arm_msgs::msg::RobotArmState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_UNKNOWN_DO_NOT_USE =
    0u;
  static constexpr uint8_t RESULT_SUCCESS =
    1u;
  static constexpr uint8_t RESULT_ERROR_BUSY =
    2u;
  static constexpr uint8_t RESULT_ERROR_UNKNOWN =
    3u;

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Response
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__srv__PollStatus_Response
    std::shared_ptr<nourish_robot_arm_msgs::srv::PollStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PollStatus_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PollStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PollStatus_Response_

// alias to use template instance with default allocator
using PollStatus_Response =
  nourish_robot_arm_msgs::srv::PollStatus_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t PollStatus_Response_<ContainerAllocator>::RESULT_UNKNOWN_DO_NOT_USE;
template<typename ContainerAllocator>
constexpr uint8_t PollStatus_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t PollStatus_Response_<ContainerAllocator>::RESULT_ERROR_BUSY;
template<typename ContainerAllocator>
constexpr uint8_t PollStatus_Response_<ContainerAllocator>::RESULT_ERROR_UNKNOWN;

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{

namespace srv
{

struct PollStatus
{
  using Request = nourish_robot_arm_msgs::srv::PollStatus_Request;
  using Response = nourish_robot_arm_msgs::srv::PollStatus_Response;
};

}  // namespace srv

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_HPP_
