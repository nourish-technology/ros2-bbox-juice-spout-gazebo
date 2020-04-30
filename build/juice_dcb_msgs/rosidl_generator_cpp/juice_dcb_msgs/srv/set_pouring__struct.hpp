// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_HPP_
#define JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_HPP_

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
# define DEPRECATED__juice_dcb_msgs__srv__SetPouring_Request __attribute__((deprecated))
#else
# define DEPRECATED__juice_dcb_msgs__srv__SetPouring_Request __declspec(deprecated)
#endif

namespace juice_dcb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPouring_Request_
{
  using Type = SetPouring_Request_<ContainerAllocator>;

  explicit SetPouring_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->spout_num = 0ul;
      this->pour = false;
    }
  }

  explicit SetPouring_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->spout_num = 0ul;
      this->pour = false;
    }
  }

  // field types and members
  using _spout_num_type =
    uint32_t;
  _spout_num_type spout_num;
  using _pour_type =
    bool;
  _pour_type pour;

  // setters for named parameter idiom
  Type & set__spout_num(
    const uint32_t & _arg)
  {
    this->spout_num = _arg;
    return *this;
  }
  Type & set__pour(
    const bool & _arg)
  {
    this->pour = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_dcb_msgs__srv__SetPouring_Request
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_dcb_msgs__srv__SetPouring_Request
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPouring_Request_ & other) const
  {
    if (this->spout_num != other.spout_num) {
      return false;
    }
    if (this->pour != other.pour) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPouring_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPouring_Request_

// alias to use template instance with default allocator
using SetPouring_Request =
  juice_dcb_msgs::srv::SetPouring_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juice_dcb_msgs

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
#include "juice_dcb_msgs/msg/command_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__juice_dcb_msgs__srv__SetPouring_Response __attribute__((deprecated))
#else
# define DEPRECATED__juice_dcb_msgs__srv__SetPouring_Response __declspec(deprecated)
#endif

namespace juice_dcb_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPouring_Response_
{
  using Type = SetPouring_Response_<ContainerAllocator>;

  explicit SetPouring_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit SetPouring_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    juice_dcb_msgs::msg::CommandResult_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const juice_dcb_msgs::msg::CommandResult_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_dcb_msgs__srv__SetPouring_Response
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_dcb_msgs__srv__SetPouring_Response
    std::shared_ptr<juice_dcb_msgs::srv::SetPouring_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPouring_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPouring_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPouring_Response_

// alias to use template instance with default allocator
using SetPouring_Response =
  juice_dcb_msgs::srv::SetPouring_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juice_dcb_msgs

namespace juice_dcb_msgs
{

namespace srv
{

struct SetPouring
{
  using Request = juice_dcb_msgs::srv::SetPouring_Request;
  using Response = juice_dcb_msgs::srv::SetPouring_Response;
};

}  // namespace srv

}  // namespace juice_dcb_msgs

#endif  // JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_HPP_
