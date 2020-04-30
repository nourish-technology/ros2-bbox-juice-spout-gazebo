// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juice_spout_msgs:srv/RunRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_HPP_
#define JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_HPP_

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
# define DEPRECATED__juice_spout_msgs__srv__RunRecipe_Request __attribute__((deprecated))
#else
# define DEPRECATED__juice_spout_msgs__srv__RunRecipe_Request __declspec(deprecated)
#endif

namespace juice_spout_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRecipe_Request_
{
  using Type = RunRecipe_Request_<ContainerAllocator>;

  explicit RunRecipe_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->recipe_name = "";
    }
  }

  explicit RunRecipe_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : recipe_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->recipe_name = "";
    }
  }

  // field types and members
  using _recipe_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _recipe_name_type recipe_name;

  // setters for named parameter idiom
  Type & set__recipe_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->recipe_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_spout_msgs__srv__RunRecipe_Request
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_spout_msgs__srv__RunRecipe_Request
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRecipe_Request_ & other) const
  {
    if (this->recipe_name != other.recipe_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRecipe_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRecipe_Request_

// alias to use template instance with default allocator
using RunRecipe_Request =
  juice_spout_msgs::srv::RunRecipe_Request_<std::allocator<void>>;

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
# define DEPRECATED__juice_spout_msgs__srv__RunRecipe_Response __attribute__((deprecated))
#else
# define DEPRECATED__juice_spout_msgs__srv__RunRecipe_Response __declspec(deprecated)
#endif

namespace juice_spout_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RunRecipe_Response_
{
  using Type = RunRecipe_Response_<ContainerAllocator>;

  explicit RunRecipe_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit RunRecipe_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juice_spout_msgs__srv__RunRecipe_Response
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juice_spout_msgs__srv__RunRecipe_Response
    std::shared_ptr<juice_spout_msgs::srv::RunRecipe_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RunRecipe_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RunRecipe_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RunRecipe_Response_

// alias to use template instance with default allocator
using RunRecipe_Response =
  juice_spout_msgs::srv::RunRecipe_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juice_spout_msgs

namespace juice_spout_msgs
{

namespace srv
{

struct RunRecipe
{
  using Request = juice_spout_msgs::srv::RunRecipe_Request;
  using Response = juice_spout_msgs::srv::RunRecipe_Response;
};

}  // namespace srv

}  // namespace juice_spout_msgs

#endif  // JUICE_SPOUT_MSGS__SRV__RUN_RECIPE__STRUCT_HPP_
