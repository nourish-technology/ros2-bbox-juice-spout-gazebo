// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotArmState in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__msg__RobotArmState
{
  bool is_connected;
  bool motion_program_is_running;
  bool registration_sensor_is_activated;
  bool is_waiting;
} nourish_robot_arm_msgs__msg__RobotArmState;

// Struct for a sequence of nourish_robot_arm_msgs__msg__RobotArmState.
typedef struct nourish_robot_arm_msgs__msg__RobotArmState__Sequence
{
  nourish_robot_arm_msgs__msg__RobotArmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__msg__RobotArmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__ROBOT_ARM_STATE__STRUCT_H_
