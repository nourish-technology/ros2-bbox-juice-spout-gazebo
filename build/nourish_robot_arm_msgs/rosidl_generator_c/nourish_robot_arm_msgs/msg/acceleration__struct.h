// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/Acceleration.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Acceleration in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__Acceleration
{
  float acceleration;
  float deceleration;
  uint8_t ramp;
} nourish_robot_arm_msgs__msg__Acceleration;

// Struct for a sequence of nourish_robot_arm_msgs__msg__Acceleration.
typedef struct nourish_robot_arm_msgs__msg__Acceleration__Sequence
{
  nourish_robot_arm_msgs__msg__Acceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__Acceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ACCELERATION__STRUCT_H_
