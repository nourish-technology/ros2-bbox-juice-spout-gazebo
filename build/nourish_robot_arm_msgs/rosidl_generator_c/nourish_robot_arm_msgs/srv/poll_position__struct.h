// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'work_object'
#include "nourish_robot_arm_msgs/msg/work_object__struct.h"
// Member 'tool'
#include "nourish_robot_arm_msgs/msg/tool__struct.h"

// Struct defined in srv/PollPosition in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__srv__PollPosition_Request
{
  nourish_robot_arm_msgs__msg__WorkObject work_object;
  nourish_robot_arm_msgs__msg__Tool tool;
} nourish_robot_arm_msgs__srv__PollPosition_Request;

// Struct for a sequence of nourish_robot_arm_msgs__srv__PollPosition_Request.
typedef struct nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence
{
  nourish_robot_arm_msgs__srv__PollPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN_DO_NOT_USE'.
enum
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__RESULT_UNKNOWN_DO_NOT_USE = 0
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__RESULT_SUCCESS = 1
};

/// Constant 'RESULT_ERROR_UNHEALTHY'.
enum
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__RESULT_ERROR_UNHEALTHY = 2
};

/// Constant 'RESULT_ERROR_BUSY'.
enum
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__RESULT_ERROR_BUSY = 3
};

/// Constant 'RESULT_ERROR_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__srv__PollPosition_Response__RESULT_ERROR_UNKNOWN = 4
};

// Include directives for member types
// Member 'joint'
#include "nourish_robot_arm_msgs/msg/joint__struct.h"
// Member 'pose'
#include "nourish_robot_arm_msgs/msg/pose__struct.h"

// Struct defined in srv/PollPosition in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__srv__PollPosition_Response
{
  uint8_t result;
  nourish_robot_arm_msgs__msg__Joint joint;
  nourish_robot_arm_msgs__msg__Pose pose;
} nourish_robot_arm_msgs__srv__PollPosition_Response;

// Struct for a sequence of nourish_robot_arm_msgs__srv__PollPosition_Response.
typedef struct nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence
{
  nourish_robot_arm_msgs__srv__PollPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__STRUCT_H_
