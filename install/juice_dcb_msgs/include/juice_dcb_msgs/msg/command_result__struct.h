// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_dcb_msgs:msg/CommandResult.idl
// generated code does not contain a copyright notice

#ifndef JUICE_DCB_MSGS__MSG__COMMAND_RESULT__STRUCT_H_
#define JUICE_DCB_MSGS__MSG__COMMAND_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_ERROR_UNKNOWN'.
enum
{
  juice_dcb_msgs__msg__CommandResult__STATUS_ERROR_UNKNOWN = 0
};

/// Constant 'STATUS_SUCCESS'.
enum
{
  juice_dcb_msgs__msg__CommandResult__STATUS_SUCCESS = 1
};

/// Constant 'STATUS_ERROR_BUSY'.
enum
{
  juice_dcb_msgs__msg__CommandResult__STATUS_ERROR_BUSY = 2
};

/// Constant 'STATUS_ERROR_NOT_CONNECTED'.
enum
{
  juice_dcb_msgs__msg__CommandResult__STATUS_ERROR_NOT_CONNECTED = 3
};

// Include directives for member types
// Member 'debug_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/CommandResult in the package juice_dcb_msgs.
typedef struct juice_dcb_msgs__msg__CommandResult
{
  uint8_t status;
  rosidl_generator_c__String debug_msg;
} juice_dcb_msgs__msg__CommandResult;

// Struct for a sequence of juice_dcb_msgs__msg__CommandResult.
typedef struct juice_dcb_msgs__msg__CommandResult__Sequence
{
  juice_dcb_msgs__msg__CommandResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_dcb_msgs__msg__CommandResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_DCB_MSGS__MSG__COMMAND_RESULT__STRUCT_H_
