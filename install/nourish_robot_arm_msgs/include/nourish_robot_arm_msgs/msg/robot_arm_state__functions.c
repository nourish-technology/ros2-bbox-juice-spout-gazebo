// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:msg/RobotArmState.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_arm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nourish_robot_arm_msgs__msg__RobotArmState__init(nourish_robot_arm_msgs__msg__RobotArmState * msg)
{
  if (!msg) {
    return false;
  }
  // is_connected
  // motion_program_is_running
  // registration_sensor_is_activated
  // is_waiting
  return true;
}

void
nourish_robot_arm_msgs__msg__RobotArmState__fini(nourish_robot_arm_msgs__msg__RobotArmState * msg)
{
  if (!msg) {
    return;
  }
  // is_connected
  // motion_program_is_running
  // registration_sensor_is_activated
  // is_waiting
}

nourish_robot_arm_msgs__msg__RobotArmState *
nourish_robot_arm_msgs__msg__RobotArmState__create()
{
  nourish_robot_arm_msgs__msg__RobotArmState * msg = (nourish_robot_arm_msgs__msg__RobotArmState *)malloc(sizeof(nourish_robot_arm_msgs__msg__RobotArmState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__msg__RobotArmState));
  bool success = nourish_robot_arm_msgs__msg__RobotArmState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__msg__RobotArmState__destroy(nourish_robot_arm_msgs__msg__RobotArmState * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__msg__RobotArmState__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__msg__RobotArmState__Sequence__init(nourish_robot_arm_msgs__msg__RobotArmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__msg__RobotArmState * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__msg__RobotArmState *)calloc(size, sizeof(nourish_robot_arm_msgs__msg__RobotArmState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__msg__RobotArmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__msg__RobotArmState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nourish_robot_arm_msgs__msg__RobotArmState__Sequence__fini(nourish_robot_arm_msgs__msg__RobotArmState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__msg__RobotArmState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nourish_robot_arm_msgs__msg__RobotArmState__Sequence *
nourish_robot_arm_msgs__msg__RobotArmState__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__msg__RobotArmState__Sequence * array = (nourish_robot_arm_msgs__msg__RobotArmState__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__msg__RobotArmState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__msg__RobotArmState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__msg__RobotArmState__Sequence__destroy(nourish_robot_arm_msgs__msg__RobotArmState__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__msg__RobotArmState__Sequence__fini(array);
  }
  free(array);
}
