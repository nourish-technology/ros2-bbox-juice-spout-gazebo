// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_H_
#define JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetPouring in the package juice_dcb_msgs.
typedef struct juice_dcb_msgs__srv__SetPouring_Request
{
  uint32_t spout_num;
  bool pour;
} juice_dcb_msgs__srv__SetPouring_Request;

// Struct for a sequence of juice_dcb_msgs__srv__SetPouring_Request.
typedef struct juice_dcb_msgs__srv__SetPouring_Request__Sequence
{
  juice_dcb_msgs__srv__SetPouring_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_dcb_msgs__srv__SetPouring_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "juice_dcb_msgs/msg/command_result__struct.h"

// Struct defined in srv/SetPouring in the package juice_dcb_msgs.
typedef struct juice_dcb_msgs__srv__SetPouring_Response
{
  juice_dcb_msgs__msg__CommandResult result;
} juice_dcb_msgs__srv__SetPouring_Response;

// Struct for a sequence of juice_dcb_msgs__srv__SetPouring_Response.
typedef struct juice_dcb_msgs__srv__SetPouring_Response__Sequence
{
  juice_dcb_msgs__srv__SetPouring_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_dcb_msgs__srv__SetPouring_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_DCB_MSGS__SRV__SET_POURING__STRUCT_H_
