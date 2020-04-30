// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/work_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nourish_robot_arm_msgs__msg__WorkObject__init(nourish_robot_arm_msgs__msg__WorkObject * msg)
{
  if (!msg) {
    return false;
  }
  // robhold
  // uframe_pos_x
  // uframe_pos_y
  // uframe_pos_z
  // uframe_orient_q1
  // uframe_orient_q2
  // uframe_orient_q3
  // uframe_orient_q4
  // oframe_pos_x
  // oframe_pos_y
  // oframe_pos_z
  // oframe_orient_q1
  // oframe_orient_q2
  // oframe_orient_q3
  // oframe_orient_q4
  return true;
}

void
nourish_robot_arm_msgs__msg__WorkObject__fini(nourish_robot_arm_msgs__msg__WorkObject * msg)
{
  if (!msg) {
    return;
  }
  // robhold
  // uframe_pos_x
  // uframe_pos_y
  // uframe_pos_z
  // uframe_orient_q1
  // uframe_orient_q2
  // uframe_orient_q3
  // uframe_orient_q4
  // oframe_pos_x
  // oframe_pos_y
  // oframe_pos_z
  // oframe_orient_q1
  // oframe_orient_q2
  // oframe_orient_q3
  // oframe_orient_q4
}

nourish_robot_arm_msgs__msg__WorkObject *
nourish_robot_arm_msgs__msg__WorkObject__create()
{
  nourish_robot_arm_msgs__msg__WorkObject * msg = (nourish_robot_arm_msgs__msg__WorkObject *)malloc(sizeof(nourish_robot_arm_msgs__msg__WorkObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__msg__WorkObject));
  bool success = nourish_robot_arm_msgs__msg__WorkObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__msg__WorkObject__destroy(nourish_robot_arm_msgs__msg__WorkObject * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__msg__WorkObject__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__msg__WorkObject__Sequence__init(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__msg__WorkObject * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__msg__WorkObject *)calloc(size, sizeof(nourish_robot_arm_msgs__msg__WorkObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__msg__WorkObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__msg__WorkObject__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__msg__WorkObject__Sequence__fini(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__msg__WorkObject__fini(&array->data[i]);
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

nourish_robot_arm_msgs__msg__WorkObject__Sequence *
nourish_robot_arm_msgs__msg__WorkObject__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__msg__WorkObject__Sequence * array = (nourish_robot_arm_msgs__msg__WorkObject__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__msg__WorkObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__msg__WorkObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__msg__WorkObject__Sequence__destroy(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__msg__WorkObject__Sequence__fini(array);
  }
  free(array);
}
