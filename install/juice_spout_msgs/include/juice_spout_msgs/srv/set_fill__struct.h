// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:srv/SetFill.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_H_
#define JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetFill in the package juice_spout_msgs.
typedef struct juice_spout_msgs__srv__SetFill_Request
{
  float grams;
} juice_spout_msgs__srv__SetFill_Request;

// Struct for a sequence of juice_spout_msgs__srv__SetFill_Request.
typedef struct juice_spout_msgs__srv__SetFill_Request__Sequence
{
  juice_spout_msgs__srv__SetFill_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__srv__SetFill_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN'.
enum
{
  juice_spout_msgs__srv__SetFill_Response__RESULT_UNKNOWN = 0
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  juice_spout_msgs__srv__SetFill_Response__RESULT_SUCCESS = 1
};

/// Constant 'RESULT_ERROR_INVALID_VALUE'.
enum
{
  juice_spout_msgs__srv__SetFill_Response__RESULT_ERROR_INVALID_VALUE = 2
};

/// Constant 'RESULT_ERROR_BUSY'.
enum
{
  juice_spout_msgs__srv__SetFill_Response__RESULT_ERROR_BUSY = 3
};

// Struct defined in srv/SetFill in the package juice_spout_msgs.
typedef struct juice_spout_msgs__srv__SetFill_Response
{
  uint8_t result;
} juice_spout_msgs__srv__SetFill_Response;

// Struct for a sequence of juice_spout_msgs__srv__SetFill_Response.
typedef struct juice_spout_msgs__srv__SetFill_Response__Sequence
{
  juice_spout_msgs__srv__SetFill_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__srv__SetFill_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__SRV__SET_FILL__STRUCT_H_
