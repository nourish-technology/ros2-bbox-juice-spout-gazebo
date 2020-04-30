// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_robot_arm_msgs:action/RegisterPoint.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_HPP_
#define NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_HPP_

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
// Member 'sensor_tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.hpp"
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Goal __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Goal __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_Goal_
{
  using Type = RegisterPoint_Goal_<ContainerAllocator>;

  explicit RegisterPoint_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sensor_tool(_init),
    speed(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->ignore_sensor = false;
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->z_offset = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
    }
  }

  explicit RegisterPoint_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sensor_tool(_alloc, _init),
    speed(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->ignore_sensor = false;
      this->x_offset = 0.0f;
      this->y_offset = 0.0f;
      this->z_offset = 0.0f;
      this->x_rot = 0.0f;
      this->y_rot = 0.0f;
      this->z_rot = 0.0f;
    }
  }

  // field types and members
  using _sensor_tool_type =
    nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator>;
  _sensor_tool_type sensor_tool;
  using _ignore_sensor_type =
    bool;
  _ignore_sensor_type ignore_sensor;
  using _speed_type =
    nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _x_offset_type =
    float;
  _x_offset_type x_offset;
  using _y_offset_type =
    float;
  _y_offset_type y_offset;
  using _z_offset_type =
    float;
  _z_offset_type z_offset;
  using _x_rot_type =
    float;
  _x_rot_type x_rot;
  using _y_rot_type =
    float;
  _y_rot_type y_rot;
  using _z_rot_type =
    float;
  _z_rot_type z_rot;

  // setters for named parameter idiom
  Type & set__sensor_tool(
    const nourish_robot_arm_msgs::msg::Tool_<ContainerAllocator> & _arg)
  {
    this->sensor_tool = _arg;
    return *this;
  }
  Type & set__ignore_sensor(
    const bool & _arg)
  {
    this->ignore_sensor = _arg;
    return *this;
  }
  Type & set__speed(
    const nourish_robot_arm_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__x_offset(
    const float & _arg)
  {
    this->x_offset = _arg;
    return *this;
  }
  Type & set__y_offset(
    const float & _arg)
  {
    this->y_offset = _arg;
    return *this;
  }
  Type & set__z_offset(
    const float & _arg)
  {
    this->z_offset = _arg;
    return *this;
  }
  Type & set__x_rot(
    const float & _arg)
  {
    this->x_rot = _arg;
    return *this;
  }
  Type & set__y_rot(
    const float & _arg)
  {
    this->y_rot = _arg;
    return *this;
  }
  Type & set__z_rot(
    const float & _arg)
  {
    this->z_rot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Goal
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Goal
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_Goal_ & other) const
  {
    if (this->sensor_tool != other.sensor_tool) {
      return false;
    }
    if (this->ignore_sensor != other.ignore_sensor) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->x_offset != other.x_offset) {
      return false;
    }
    if (this->y_offset != other.y_offset) {
      return false;
    }
    if (this->z_offset != other.z_offset) {
      return false;
    }
    if (this->x_rot != other.x_rot) {
      return false;
    }
    if (this->y_rot != other.y_rot) {
      return false;
    }
    if (this->z_rot != other.z_rot) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_Goal_

// alias to use template instance with default allocator
using RegisterPoint_Goal =
  nourish_robot_arm_msgs::action::RegisterPoint_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Result __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Result __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_Result_
{
  using Type = RegisterPoint_Result_<ContainerAllocator>;

  explicit RegisterPoint_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_status = 0;
    }
  }

  explicit RegisterPoint_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->final_status = 0;
    }
  }

  // field types and members
  using _final_status_type =
    uint8_t;
  _final_status_type final_status;
  using _pose_type =
    nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__final_status(
    const uint8_t & _arg)
  {
    this->final_status = _arg;
    return *this;
  }
  Type & set__pose(
    const nourish_robot_arm_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_UNKNOWN =
    0u;
  static constexpr uint8_t RESULT_SUCCESS =
    1u;
  static constexpr uint8_t RESULT_ERR_ROBOT_UNHEALTHY =
    2u;
  static constexpr uint8_t RESULT_ERR_SENSOR_ACTIVATED =
    3u;
  static constexpr uint8_t RESULT_ERR_SENSOR_NEVER_ENGAGED =
    4u;
  static constexpr uint8_t RESULT_ERR_UNKNOWN =
    5u;
  static constexpr uint8_t RESULT_ERR_BUSY =
    6u;

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Result
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Result
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_Result_ & other) const
  {
    if (this->final_status != other.final_status) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_Result_

// alias to use template instance with default allocator
using RegisterPoint_Result =
  nourish_robot_arm_msgs::action::RegisterPoint_Result_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_ERR_ROBOT_UNHEALTHY;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_ERR_SENSOR_ACTIVATED;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_ERR_SENSOR_NEVER_ENGAGED;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_ERR_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t RegisterPoint_Result_<ContainerAllocator>::RESULT_ERR_BUSY;

}  // namespace action

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

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Feedback __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_Feedback_
{
  using Type = RegisterPoint_Feedback_<ContainerAllocator>;

  explicit RegisterPoint_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RegisterPoint_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Feedback
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_Feedback
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_Feedback_

// alias to use template instance with default allocator
using RegisterPoint_Feedback =
  nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "nourish_robot_arm_msgs/action/register_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_SendGoal_Request_
{
  using Type = RegisterPoint_SendGoal_Request_<ContainerAllocator>;

  explicit RegisterPoint_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit RegisterPoint_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const nourish_robot_arm_msgs::action::RegisterPoint_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Request
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_SendGoal_Request_

// alias to use template instance with default allocator
using RegisterPoint_SendGoal_Request =
  nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_SendGoal_Response_
{
  using Type = RegisterPoint_SendGoal_Response_<ContainerAllocator>;

  explicit RegisterPoint_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit RegisterPoint_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_SendGoal_Response
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_SendGoal_Response_

// alias to use template instance with default allocator
using RegisterPoint_SendGoal_Response =
  nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{

namespace action
{

struct RegisterPoint_SendGoal
{
  using Request = nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Request;
  using Response = nourish_robot_arm_msgs::action::RegisterPoint_SendGoal_Response;
};

}  // namespace action

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
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_GetResult_Request_
{
  using Type = RegisterPoint_GetResult_Request_<ContainerAllocator>;

  explicit RegisterPoint_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit RegisterPoint_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Request
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_GetResult_Request_

// alias to use template instance with default allocator
using RegisterPoint_GetResult_Request =
  nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'result'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_GetResult_Response_
{
  using Type = RegisterPoint_GetResult_Response_<ContainerAllocator>;

  explicit RegisterPoint_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit RegisterPoint_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const nourish_robot_arm_msgs::action::RegisterPoint_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_GetResult_Response
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_GetResult_Response_

// alias to use template instance with default allocator
using RegisterPoint_GetResult_Response =
  nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nourish_robot_arm_msgs

namespace nourish_robot_arm_msgs
{

namespace action
{

struct RegisterPoint_GetResult
{
  using Request = nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Request;
  using Response = nourish_robot_arm_msgs::action::RegisterPoint_GetResult_Response;
};

}  // namespace action

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
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "nourish_robot_arm_msgs/action/register_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage __declspec(deprecated)
#endif

namespace nourish_robot_arm_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct RegisterPoint_FeedbackMessage_
{
  using Type = RegisterPoint_FeedbackMessage_<ContainerAllocator>;

  explicit RegisterPoint_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit RegisterPoint_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const nourish_robot_arm_msgs::action::RegisterPoint_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_robot_arm_msgs__action__RegisterPoint_FeedbackMessage
    std::shared_ptr<nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterPoint_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterPoint_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterPoint_FeedbackMessage_

// alias to use template instance with default allocator
using RegisterPoint_FeedbackMessage =
  nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace nourish_robot_arm_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace nourish_robot_arm_msgs
{

namespace action
{

struct RegisterPoint
{
  /// The goal message defined in the action definition.
  using Goal = nourish_robot_arm_msgs::action::RegisterPoint_Goal;
  /// The result message defined in the action definition.
  using Result = nourish_robot_arm_msgs::action::RegisterPoint_Result;
  /// The feedback message defined in the action definition.
  using Feedback = nourish_robot_arm_msgs::action::RegisterPoint_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = nourish_robot_arm_msgs::action::RegisterPoint_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = nourish_robot_arm_msgs::action::RegisterPoint_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = nourish_robot_arm_msgs::action::RegisterPoint_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct RegisterPoint RegisterPoint;

}  // namespace action

}  // namespace nourish_robot_arm_msgs

#endif  // NOURISH_ROBOT_ARM_MSGS__ACTION__REGISTER_POINT__STRUCT_HPP_
