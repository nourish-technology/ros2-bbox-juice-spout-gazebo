// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:srv/PollStatus.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_H_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/PollStatus in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__srv__PollStatus_Request
{
  uint8_t structure_needs_at_least_one_member;
} nourish_robot_arm_msgs__srv__PollStatus_Request;

// Struct for a sequence of nourish_robot_arm_msgs__srv__PollStatus_Request.
typedef struct nourish_robot_arm_msgs__srv__PollStatus_Request__Sequence
{
  nourish_robot_arm_msgs__srv__PollStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__srv__PollStatus_Request__Sequence;


// Constants defined in the message

/// Constant 'RESULT_UNKNOWN_DO_NOT_USE'.
enum
{
  nourish_robot_arm_msgs__srv__PollStatus_Response__RESULT_UNKNOWN_DO_NOT_USE = 0
};

/// Constant 'RESULT_SUCCESS'.
enum
{
  nourish_robot_arm_msgs__srv__PollStatus_Response__RESULT_SUCCESS = 1
};

/// Constant 'RESULT_ERROR_BUSY'.
enum
{
  nourish_robot_arm_msgs__srv__PollStatus_Response__RESULT_ERROR_BUSY = 2
};

/// Constant 'RESULT_ERROR_UNKNOWN'.
enum
{
  nourish_robot_arm_msgs__srv__PollStatus_Response__RESULT_ERROR_UNKNOWN = 3
};

// Include directives for member types
// Member 'state'
#include "nourish_robot_arm_msgs/msg/robot_arm_state__struct.h"

// Struct defined in srv/PollStatus in the package nourish_robot_arm_msgs.
typedef struct nourish_robot_arm_msgs__srv__PollStatus_Response
{
  uint8_t result;
  nourish_robot_arm_msgs__msg__RobotArmState state;
} nourish_robot_arm_msgs__srv__PollStatus_Response;

// Struct for a sequence of nourish_robot_arm_msgs__srv__PollStatus_Response.
typedef struct nourish_robot_arm_msgs__srv__PollStatus_Response__Sequence
{
  nourish_robot_arm_msgs__srv__PollStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nourish_robot_arm_msgs__srv__PollStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_STATUS__STRUCT_H_
