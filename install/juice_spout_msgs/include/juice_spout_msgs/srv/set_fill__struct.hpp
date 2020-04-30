// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_HPP_
#define JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_HPP_

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
# define DEPRECATED__juice_spout_msgs__srv__SetFill_Request __attribute__((deprecated))
#else
# define DEPRECATED__juice_spout_msgs__srv__SetFill_Request __declspec(deprecated)
#endif

namespace juice_spout_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFill_Request_
{
  using Type = SetFill_Request_<ContainerAllocator>;

  explicit SetFill_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->grams = 0.0f;
    }
  }

  explicit SetFill_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->grams = 0.0f;
    }
  }

  // field types and members
  using _grams_type =
    float;
  _grams_type grams;

  // setters for named parameter idiom
  Type & set__grams(
    const float & _arg)
  {
    this->grams = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_spout_msgs__srv__SetFill_Request
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_spout_msgs__srv__SetFill_Request
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFill_Request_ & other) const
  {
    if (this->grams != other.grams) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFill_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFill_Request_

// alias to use template instance with default allocator
using SetFill_Request =
  juice_spout_msgs::srv::SetFill_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juice_spout_msgs

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
# define DEPRECATED__juice_spout_msgs__srv__SetFill_Response __attribute__((deprecated))
#else
# define DEPRECATED__juice_spout_msgs__srv__SetFill_Response __declspec(deprecated)
#endif

namespace juice_spout_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetFill_Response_
{
  using Type = SetFill_Response_<ContainerAllocator>;

  explicit SetFill_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit SetFill_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
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

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESULT_UNKNOWN =
    0u;
  static constexpr uint8_t RESULT_SUCCESS =
    1u;
  static constexpr uint8_t RESULT_ERROR_INVALID_VALUE =
    2u;
  static constexpr uint8_t RESULT_ERROR_BUSY =
    3u;

  // pointer types
  using RawPtr =
    juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_spout_msgs__srv__SetFill_Response
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_spout_msgs__srv__SetFill_Response
    std::shared_ptr<juice_spout_msgs::srv::SetFill_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetFill_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetFill_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetFill_Response_

// alias to use template instance with default allocator
using SetFill_Response =
  juice_spout_msgs::srv::SetFill_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t SetFill_Response_<ContainerAllocator>::RESULT_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t SetFill_Response_<ContainerAllocator>::RESULT_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t SetFill_Response_<ContainerAllocator>::RESULT_ERROR_INVALID_VALUE;
template<typename ContainerAllocator>
constexpr uint8_t SetFill_Response_<ContainerAllocator>::RESULT_ERROR_BUSY;

}  // namespace srv

}  // namespace juice_spout_msgs

namespace juice_spout_msgs
{

namespace srv
{

struct SetFill
{
  using Request = juice_spout_msgs::srv::SetFill_Request;
  using Response = juice_spout_msgs::srv::SetFill_Response;
};

}  // namespace srv

}  // namespace juice_spout_msgs

#endif  // JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_HPP_
