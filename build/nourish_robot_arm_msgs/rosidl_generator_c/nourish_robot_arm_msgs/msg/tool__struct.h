// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/Tool.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Tool in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__Tool
{
  bool robhold;
  float x;
  float y;
  float z;
  float q1;
  float q2;
  float q3;
  float q4;
} nourish_robot_arm_msgs__msg__Tool;

// Struct for a sequence of nourish_robot_arm_msgs__msg__Tool.
typedef struct nourish_robot_arm_msgs__msg__Tool__Sequence
{
  nourish_robot_arm_msgs__msg__Tool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__Tool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__TOOL__STRUCT_H_
