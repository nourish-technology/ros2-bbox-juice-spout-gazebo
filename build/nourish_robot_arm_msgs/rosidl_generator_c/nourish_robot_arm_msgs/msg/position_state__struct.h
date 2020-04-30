// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/PositionState.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__struct.h"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.h"

// Struct defined in msg/PositionState in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__PositionState
{
  nourish_robot_arm_msgs__msg__Joint joint;
  nourish_robot_arm_msgs__msg__Pose pose;
} nourish_robot_arm_msgs__msg__PositionState;

// Struct for a sequence of nourish_robot_arm_msgs__msg__PositionState.
typedef struct nourish_robot_arm_msgs__msg__PositionState__Sequence
{
  nourish_robot_arm_msgs__msg__PositionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__PositionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__POSITION_STATE__STRUCT_H_
