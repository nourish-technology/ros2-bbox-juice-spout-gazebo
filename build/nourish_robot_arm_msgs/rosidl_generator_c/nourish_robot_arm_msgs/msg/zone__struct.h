// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Zone in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__Zone
{
  bool fine_point;
  float pzone_eax;
  float pzone_ori;
  float pzone_tcp;
  float leax;
  float ori;
  float reax;
} nourish_robot_arm_msgs__msg__Zone;

// Struct for a sequence of nourish_robot_arm_msgs__msg__Zone.
typedef struct nourish_robot_arm_msgs__msg__Zone__Sequence
{
  nourish_robot_arm_msgs__msg__Zone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__Zone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ZONE__STRUCT_H_
