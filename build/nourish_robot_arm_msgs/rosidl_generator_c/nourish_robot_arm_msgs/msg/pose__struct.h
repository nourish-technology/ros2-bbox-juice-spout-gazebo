// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__POSE__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Pose in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__Pose
{
  float x;
  float y;
  float z;
  float q1;
  float q2;
  float q3;
  float q4;
  float cf1;
  float cf4;
  float cf6;
  float cfx;
} nourish_robot_arm_msgs__msg__Pose;

// Struct for a sequence of nourish_robot_arm_msgs__msg__Pose.
typedef struct nourish_robot_arm_msgs__msg__Pose__Sequence
{
  nourish_robot_arm_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__POSE__STRUCT_H_
