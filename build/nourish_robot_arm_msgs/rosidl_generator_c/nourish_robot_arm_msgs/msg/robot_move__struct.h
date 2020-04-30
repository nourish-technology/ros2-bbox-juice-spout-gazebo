// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERPOLATION_JOINT'.
enum
{
  nourish_robot_arm_msgs__msg__RobotMove__INTERPOLATION_JOINT = 0
};

/// Constant 'INTERPOLATION_POSE'.
enum
{
  nourish_robot_arm_msgs__msg__RobotMove__INTERPOLATION_POSE = 1
};

/// Constant 'TARGET_TYPE_JOINT'.
enum
{
  nourish_robot_arm_msgs__msg__RobotMove__TARGET_TYPE_JOINT = 0
};

/// Constant 'TARGET_TYPE_POSE'.
enum
{
  nourish_robot_arm_msgs__msg__RobotMove__TARGET_TYPE_POSE = 1
};

// Include directives for member types
// Member 'speed'
#include "nourish_robot_arm_msgs/msg/speed__struct.h"
// Member 'acceleration'
#include "nourish_robot_arm_msgs/msg/acceleration__struct.h"
// Member 'zone'
#include "nourish_robot_arm_msgs/msg/zone__struct.h"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.h"
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__struct.h"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.h"
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__struct.h"

// Struct defined in msg/RobotMove in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__RobotMove
{
  nourish_robot_arm_msgs__msg__Speed speed;
  nourish_robot_arm_msgs__msg__Acceleration acceleration;
  nourish_robot_arm_msgs__msg__Zone zone;
  nourish_robot_arm_msgs__msg__Tool tool;
  nourish_robot_arm_msgs__msg__WorkObject work_object;
  uint8_t interpolation;
  uint8_t target_type;
  nourish_robot_arm_msgs__msg__Pose pose;
  nourish_robot_arm_msgs__msg__Joint joint;
} nourish_robot_arm_msgs__msg__RobotMove;

// Struct for a sequence of nourish_robot_arm_msgs__msg__RobotMove.
typedef struct nourish_robot_arm_msgs__msg__RobotMove__Sequence
{
  nourish_robot_arm_msgs__msg__RobotMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__RobotMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_MOVE__STRUCT_H_
