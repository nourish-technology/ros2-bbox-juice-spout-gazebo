// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nourish_robot_arm_msgs:msg/Speed.idl
// generated code does not contain a copyright notice
#include "nourish_robot_arm_msgs/msg/speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
nourish_robot_arm_msgs__msg__Speed__init(nourish_robot_arm_msgs__msg__Speed * msg)
{
  if (!msg) {
    return false;
  }
  // v_leax
  // v_ori
  // v_reax
  // v_tcp
  return true;
}

void
nourish_robot_arm_msgs__msg__Speed__fini(nourish_robot_arm_msgs__msg__Speed * msg)
{
  if (!msg) {
    return;
  }
  // v_leax
  // v_ori
  // v_reax
  // v_tcp
}

nourish_robot_arm_msgs__msg__Speed *
nourish_robot_arm_msgs__msg__Speed__create()
{
  nourish_robot_arm_msgs__msg__Speed * msg = (nourish_robot_arm_msgs__msg__Speed *)malloc(sizeof(nourish_robot_arm_msgs__msg__Speed));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nourish_robot_arm_msgs__msg__Speed));
  bool success = nourish_robot_arm_msgs__msg__Speed__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nourish_robot_arm_msgs__msg__Speed__destroy(nourish_robot_arm_msgs__msg__Speed * msg)
{
  if (msg) {
    nourish_robot_arm_msgs__msg__Speed__fini(msg);
  }
  free(msg);
}


bool
nourish_robot_arm_msgs__msg__Speed__Sequence__init(nourish_robot_arm_msgs__msg__Speed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nourish_robot_arm_msgs__msg__Speed * data = NULL;
  if (size) {
    data = (nourish_robot_arm_msgs__msg__Speed *)calloc(size, sizeof(nourish_robot_arm_msgs__msg__Speed));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nourish_robot_arm_msgs__msg__Speed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nourish_robot_arm_msgs__msg__Speed__fini(&data[i - 1]);
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
nourish_robot_arm_msgs__msg__Speed__Sequence__fini(nourish_robot_arm_msgs__msg__Speed__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nourish_robot_arm_msgs__msg__Speed__fini(&array->data[i]);
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

nourish_robot_arm_msgs__msg__Speed__Sequence *
nourish_robot_arm_msgs__msg__Speed__Sequence__create(size_t size)
{
  nourish_robot_arm_msgs__msg__Speed__Sequence * array = (nourish_robot_arm_msgs__msg__Speed__Sequence *)malloc(sizeof(nourish_robot_arm_msgs__msg__Speed__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nourish_robot_arm_msgs__msg__Speed__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nourish_robot_arm_msgs__msg__Speed__Sequence__destroy(nourish_robot_arm_msgs__msg__Speed__Sequence * array)
{
  if (array) {
    nourish_robot_arm_msgs__msg__Speed__Sequence__fini(array);
  }
  free(array);
}
