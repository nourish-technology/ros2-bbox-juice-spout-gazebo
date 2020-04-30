// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:msg/WorkObject.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__FUNCTIONS_H_
#define NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nourish_robot_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nourish_robot_arm_msgs/msg/work_object__struct.h"

/// Initialize msg/WorkObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__msg__WorkObject
 * )) before or use
 * nourish_robot_arm_msgs__msg__WorkObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__msg__WorkObject__init(nourish_robot_arm_msgs__msg__WorkObject * msg);

/// Finalize msg/WorkObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__msg__WorkObject__fini(nourish_robot_arm_msgs__msg__WorkObject * msg);

/// Create msg/WorkObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__msg__WorkObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__msg__WorkObject *
nourish_robot_arm_msgs__msg__WorkObject__create();

/// Destroy msg/WorkObject message.
/**
 * It calls
 * nourish_robot_arm_msgs__msg__WorkObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__msg__WorkObject__destroy(nourish_robot_arm_msgs__msg__WorkObject * msg);


/// Initialize array of msg/WorkObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__msg__WorkObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__msg__WorkObject__Sequence__init(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array, size_t size);

/// Finalize array of msg/WorkObject messages.
/**
 * It calls
 * nourish_robot_arm_msgs__msg__WorkObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__msg__WorkObject__Sequence__fini(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array);

/// Create array of msg/WorkObject messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__msg__WorkObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__msg__WorkObject__Sequence *
nourish_robot_arm_msgs__msg__WorkObject__Sequence__create(size_t size);

/// Destroy array of msg/WorkObject messages.
/**
 * It calls
 * nourish_robot_arm_msgs__msg__WorkObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__msg__WorkObject__Sequence__destroy(nourish_robot_arm_msgs__msg__WorkObject__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__MSG__WORK_OBJECT__FUNCTIONS_H_
