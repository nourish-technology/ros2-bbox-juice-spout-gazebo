// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nourish_scale_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_HPP_
#define NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_HPP_

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
# define DEPRECATED__nourish_scale_msgs__msg__Response __attribute__((deprecated))
#else
# define DEPRECATED__nourish_scale_msgs__msg__Response __declspec(deprecated)
#endif

namespace nourish_scale_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Response_
{
  using Type = Response_<ContainerAllocator>;

  explicit Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->debug_msg = "";
    }
  }

  explicit Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : debug_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
      this->debug_msg = "";
    }
  }

  // field types and members
  using _status_type =
    uint8_t;
  _status_type status;
  using _debug_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _debug_msg_type debug_msg;

  // setters for named parameter idiom
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__debug_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->debug_msg = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_SUCCESS =
    1u;
  static constexpr uint8_t STATUS_ERROR_NOT_CONNECTED =
    2u;
  static constexpr uint8_t STATUS_ERROR_UNKNOWN =
    3u;

  // pointer types
  using RawPtr =
    nourish_scale_msgs::msg::Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nourish_scale_msgs::msg::Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nourish_scale_msgs::msg::Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nourish_scale_msgs::msg::Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nourish_scale_msgs__msg__Response
    std::shared_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nourish_scale_msgs__msg__Response
    std::shared_ptr<nourish_scale_msgs::msg::Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->debug_msg != other.debug_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Response_

// alias to use template instance with default allocator
using Response =
  nourish_scale_msgs::msg::Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Response_<ContainerAllocator>::STATUS_SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t Response_<ContainerAllocator>::STATUS_ERROR_NOT_CONNECTED;
template<typename ContainerAllocator>
constexpr uint8_t Response_<ContainerAllocator>::STATUS_ERROR_UNKNOWN;

}  // namespace msg

}  // namespace nourish_scale_msgs

#endif  // NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_HPP_
