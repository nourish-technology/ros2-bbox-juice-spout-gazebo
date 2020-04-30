// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/robot_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `speed`
#include "nourish_robot_arm_msgs/msg/speed__functions.h"
// Member `acceleration`
#include "nourish_robot_arm_msgs/msg/acceleration__functions.h"
// Member `zone`
#include "nourish_robot_arm_msgs/msg/zone__functions.h"
// Member `tool`
#include "nourish_robot_arm_msgs/msg/tool__functions.h"
// Member `work_object`
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"
// Member `pose`
#include "nourish_robot_arm_msgs/msg/pose__functions.h"
// Member `joint`
#include "nourish_robot_arm_msgs/msg/joint__functions.h"

bool
nourish_robot_arm_msgs__msg__RobotMove__init(nourish_robot_arm_msgs__msg__RobotMove * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  if (!nourish_robot_arm_msgs__msg__Speed__init(&msg->speed)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // acceleration
  if (!nourish_robot_arm_msgs__msg__Acceleration__init(&msg->acceleration)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // zone
  if (!nourish_robot_arm_msgs__msg__Zone__init(&msg->zone)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // tool
  if (!nourish_robot_arm_msgs__msg__Tool__init(&msg->tool)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // work_object
  if (!nourish_robot_arm_msgs__msg__WorkObject__init(&msg->work_object)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // interpolation
  // target_type
  // pose
  if (!nourish_robot_arm_msgs__msg__Pose__init(&msg->pose)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  // joint
  if (!nourish_robot_arm_msgs__msg__Joint__init(&msg->joint)) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
    return false;
  }
  return true;
}

void
nourish_robot_arm_msgs__msg__RobotMove__fini(nourish_robot_arm_msgs__msg__RobotMove * msg)
{
  if (!msg) {
    return;
  }
  // speed
  nourish_robot_arm_msgs__msg__Speed__fini(&msg->speed);
  // acceleration
  nourish_robot_arm_msgs__msg__Acceleration__fini(&msg->acceleration);
  // zone
  nourish_robot_arm_msgs__msg__Zone__fini(&msg->zone);
  // tool
  nourish_robot_arm_msgs__msg__Tool__fini(&msg->tool);
  // work_object
  nourish_robot_arm_msgs__msg__WorkObject__fini(&msg->work_object);
  // interpolation
  // target_type
  // pose
  nourish_robot_arm_msgs__msg__Pose__fini(&msg->pose);
  // joint
  nourish_robot_arm_msgs__msg__Joint__fini(&msg->joint);
}

nourish_robot_arm_msgs__msg__RobotMove *
nourish_robot_arm_msgs__msg__RobotMove__create()
{
  nourish_robot_arm_msgs__msg__RobotMove * msg = (nourish_robot_arm_msgs__msg__RobotMove *)malloc(sizeof(nourish_robot_arm_msgs__msg__RobotMove));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__msg__RobotMove));
  bool success = nourish_robot_arm_msgs__msg__RobotMove__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__msg__RobotMove__destroy(nourish_robot_arm_msgs__msg__RobotMove * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__msg__RobotMove__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__msg__RobotMove__Sequence__init(nourish_robot_arm_msgs__msg__RobotMove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__msg__RobotMove * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__msg__RobotMove *)calloc(size, sizeof(nourish_robot_arm_msgs__msg__RobotMove));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__msg__RobotMove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__msg__RobotMove__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__msg__RobotMove__Sequence__fini(nourish_robot_arm_msgs__msg__RobotMove__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__msg__RobotMove__fini(&array->data[i]);
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

nourish_robot_arm_msgs__msg__RobotMove__Sequence *
nourish_robot_arm_msgs__msg__RobotMove__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__msg__RobotMove__Sequence * array = (nourish_robot_arm_msgs__msg__RobotMove__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__msg__RobotMove__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__msg__RobotMove__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__msg__RobotMove__Sequence__destroy(nourish_robot_arm_msgs__msg__RobotMove__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__msg__RobotMove__Sequence__fini(array);
  }
  free(array);
}
