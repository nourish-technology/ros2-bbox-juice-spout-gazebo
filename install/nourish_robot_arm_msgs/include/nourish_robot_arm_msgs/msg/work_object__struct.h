// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WorkObject in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__WorkObject
{
  bool robhold;
  float uframe_pos_x;
  float uframe_pos_y;
  float uframe_pos_z;
  float uframe_orient_q1;
  float uframe_orient_q2;
  float uframe_orient_q3;
  float uframe_orient_q4;
  float oframe_pos_x;
  float oframe_pos_y;
  float oframe_pos_z;
  float oframe_orient_q1;
  float oframe_orient_q2;
  float oframe_orient_q3;
  float oframe_orient_q4;
} nourish_robot_arm_msgs__msg__WorkObject;

// Struct for a sequence of nourish_robot_arm_msgs__msg__WorkObject.
typedef struct nourish_robot_arm_msgs__msg__WorkObject__Sequence
{
  nourish_robot_arm_msgs__msg__WorkObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__WorkObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__STRUCT_H_
