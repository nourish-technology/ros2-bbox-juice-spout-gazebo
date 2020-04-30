// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_scale_msgs:msg/Response.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_H_
#define NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_SUCCESS'.
enum
{
  nourish_scale_msgs__msg__Response__STATUS_SUCCESS = 1
};

/// Constant 'STATUS_ERROR_NOT_CONNECTED'.
enum
{
  nourish_scale_msgs__msg__Response__STATUS_ERROR_NOT_CONNECTED = 2
};

/// Constant 'STATUS_ERROR_UNKNOWN'.
enum
{
  nourish_scale_msgs__msg__Response__STATUS_ERROR_UNKNOWN = 3
};

// Include directives for member types
// Member 'debug_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Response in the package nourish_scale_msgs.
typedef struct nourish_scale_msgs__msg__Response
{
  uint8_t status;
  rosidl_generator_c__String debug_msg;
} nourish_scale_msgs__msg__Response;

// Struct for a sequence of nourish_scale_msgs__msg__Response.
typedef struct nourish_scale_msgs__msg__Response__Sequence
{
  nourish_scale_msgs__msg__Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_scale_msgs__msg__Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_SCALE_MSGS__MSG__RESPONSE__STRUCT_H_
