// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Speed in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__Speed
{
  float v_leax;
  float v_ori;
  float v_reax;
  float v_tcp;
} nourish_robot_arm_msgs__msg__Speed;

// Struct for a sequence of nourish_robot_arm_msgs__msg__Speed.
typedef struct nourish_robot_arm_msgs__msg__Speed__Sequence
{
  nourish_robot_arm_msgs__msg__Speed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__Speed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__SPEED__STRUCT_H_
