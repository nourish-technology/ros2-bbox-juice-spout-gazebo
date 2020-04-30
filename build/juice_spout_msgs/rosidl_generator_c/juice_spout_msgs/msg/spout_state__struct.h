// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_H_
#define JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FILL_LEVEL_DONT_USE'.
enum
{
  juice_spout_msgs__msg__SpoutState__FILL_LEVEL_DONT_USE = 0
};

/// Constant 'FILL_LEVEL_EMPTY'.
enum
{
  juice_spout_msgs__msg__SpoutState__FILL_LEVEL_EMPTY = 1
};

/// Constant 'FILL_LEVEL_LOW'.
enum
{
  juice_spout_msgs__msg__SpoutState__FILL_LEVEL_LOW = 2
};

/// Constant 'FILL_LEVEL_NOMINAL'.
enum
{
  juice_spout_msgs__msg__SpoutState__FILL_LEVEL_NOMINAL = 3
};

/// Constant 'FILL_LEVEL_UNKNOWN'.
enum
{
  juice_spout_msgs__msg__SpoutState__FILL_LEVEL_UNKNOWN = 4
};

// Struct defined in msg/SpoutState in the package juice_spout_msgs.
typedef struct juice_spout_msgs__msg__SpoutState
{
  bool is_healthy;
  bool is_busy;
  uint8_t fill_level;
} juice_spout_msgs__msg__SpoutState;

// Struct for a sequence of juice_spout_msgs__msg__SpoutState.
typedef struct juice_spout_msgs__msg__SpoutState__Sequence
{
  juice_spout_msgs__msg__SpoutState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juice_spout_msgs__msg__SpoutState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__STRUCT_H_
