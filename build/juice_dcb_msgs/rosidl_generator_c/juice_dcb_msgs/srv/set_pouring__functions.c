// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juice_dcb_msgs:srv/SetPouring.idl
// generated code does not contain a copyright notice
#include "juice_dcb_msgs/srv/set_pouring__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
juice_dcb_msgs__srv__SetPouring_Request__init(juice_dcb_msgs__srv__SetPouring_Request * msg)
{
  if (!msg) {
    return false;
  }
  // spout_num
  // pour
  return true;
}

void
juice_dcb_msgs__srv__SetPouring_Request__fini(juice_dcb_msgs__srv__SetPouring_Request * msg)
{
  if (!msg) {
    return;
  }
  // spout_num
  // pour
}

juice_dcb_msgs__srv__SetPouring_Request *
juice_dcb_msgs__srv__SetPouring_Request__create()
{
  juice_dcb_msgs__srv__SetPouring_Request * msg = (juice_dcb_msgs__srv__SetPouring_Request *)malloc(sizeof(juice_dcb_msgs__srv__SetPouring_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_dcb_msgs__srv__SetPouring_Request));
  bool success = juice_dcb_msgs__srv__SetPouring_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_dcb_msgs__srv__SetPouring_Request__destroy(juice_dcb_msgs__srv__SetPouring_Request * msg)
{
  if (msg) {
    juice_dcb_msgs__srv__SetPouring_Request__fini(msg);
  }
  free(msg);
}


bool
juice_dcb_msgs__srv__SetPouring_Request__Sequence__init(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_dcb_msgs__srv__SetPouring_Request * data = NULL;
  if (size) {
    data = (juice_dcb_msgs__srv__SetPouring_Request *)calloc(size, sizeof(juice_dcb_msgs__srv__SetPouring_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_dcb_msgs__srv__SetPouring_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_dcb_msgs__srv__SetPouring_Request__fini(&data[i - 1]);
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
juice_dcb_msgs__srv__SetPouring_Request__Sequence__fini(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_dcb_msgs__srv__SetPouring_Request__fini(&array->data[i]);
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

juice_dcb_msgs__srv__SetPouring_Request__Sequence *
juice_dcb_msgs__srv__SetPouring_Request__Sequence__create(size_t size)
{
  juice_dcb_msgs__srv__SetPouring_Request__Sequence * array = (juice_dcb_msgs__srv__SetPouring_Request__Sequence *)malloc(sizeof(juice_dcb_msgs__srv__SetPouring_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_dcb_msgs__srv__SetPouring_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_dcb_msgs__srv__SetPouring_Request__Sequence__destroy(juice_dcb_msgs__srv__SetPouring_Request__Sequence * array)
{
  if (array) {
    juice_dcb_msgs__srv__SetPouring_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
#include "juice_dcb_msgs/msg/command_result__functions.h"

bool
juice_dcb_msgs__srv__SetPouring_Response__init(juice_dcb_msgs__srv__SetPouring_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!juice_dcb_msgs__msg__CommandResult__init(&msg->result)) {
    juice_dcb_msgs__srv__SetPouring_Response__fini(msg);
    return false;
  }
  return true;
}

void
juice_dcb_msgs__srv__SetPouring_Response__fini(juice_dcb_msgs__srv__SetPouring_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  juice_dcb_msgs__msg__CommandResult__fini(&msg->result);
}

juice_dcb_msgs__srv__SetPouring_Response *
juice_dcb_msgs__srv__SetPouring_Response__create()
{
  juice_dcb_msgs__srv__SetPouring_Response * msg = (juice_dcb_msgs__srv__SetPouring_Response *)malloc(sizeof(juice_dcb_msgs__srv__SetPouring_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juice_dcb_msgs__srv__SetPouring_Response));
  bool success = juice_dcb_msgs__srv__SetPouring_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
juice_dcb_msgs__srv__SetPouring_Response__destroy(juice_dcb_msgs__srv__SetPouring_Response * msg)
{
  if (msg) {
    juice_dcb_msgs__srv__SetPouring_Response__fini(msg);
  }
  free(msg);
}


bool
juice_dcb_msgs__srv__SetPouring_Response__Sequence__init(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  juice_dcb_msgs__srv__SetPouring_Response * data = NULL;
  if (size) {
    data = (juice_dcb_msgs__srv__SetPouring_Response *)calloc(size, sizeof(juice_dcb_msgs__srv__SetPouring_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juice_dcb_msgs__srv__SetPouring_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juice_dcb_msgs__srv__SetPouring_Response__fini(&data[i - 1]);
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
juice_dcb_msgs__srv__SetPouring_Response__Sequence__fini(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      juice_dcb_msgs__srv__SetPouring_Response__fini(&array->data[i]);
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

juice_dcb_msgs__srv__SetPouring_Response__Sequence *
juice_dcb_msgs__srv__SetPouring_Response__Sequence__create(size_t size)
{
  juice_dcb_msgs__srv__SetPouring_Response__Sequence * array = (juice_dcb_msgs__srv__SetPouring_Response__Sequence *)malloc(sizeof(juice_dcb_msgs__srv__SetPouring_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = juice_dcb_msgs__srv__SetPouring_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
juice_dcb_msgs__srv__SetPouring_Response__Sequence__destroy(juice_dcb_msgs__srv__SetPouring_Response__Sequence * array)
{
  if (array) {
    juice_dcb_msgs__srv__SetPouring_Response__Sequence__fini(array);
  }
  free(array);
}
