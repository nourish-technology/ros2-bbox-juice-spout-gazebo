// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:msg/SpoutState.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__FUNCTIONS_H_
#define JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "juice_spout_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "juice_spout_msgs/msg/spout_state__struct.h"

/// Initialize msg/SpoutState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__msg__SpoutState
 * )) before or use
 * juice_spout_msgs__msg__SpoutState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__msg__SpoutState__init(juice_spout_msgs__msg__SpoutState * msg);

/// Finalize msg/SpoutState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__msg__SpoutState__fini(juice_spout_msgs__msg__SpoutState * msg);

/// Create msg/SpoutState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__msg__SpoutState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__msg__SpoutState *
juice_spout_msgs__msg__SpoutState__create();

/// Destroy msg/SpoutState message.
/**
 * It calls
 * juice_spout_msgs__msg__SpoutState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__msg__SpoutState__destroy(juice_spout_msgs__msg__SpoutState * msg);


/// Initialize array of msg/SpoutState messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__msg__SpoutState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__msg__SpoutState__Sequence__init(juice_spout_msgs__msg__SpoutState__Sequence * array, size_t size);

/// Finalize array of msg/SpoutState messages.
/**
 * It calls
 * juice_spout_msgs__msg__SpoutState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__msg__SpoutState__Sequence__fini(juice_spout_msgs__msg__SpoutState__Sequence * array);

/// Create array of msg/SpoutState messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__msg__SpoutState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__msg__SpoutState__Sequence *
juice_spout_msgs__msg__SpoutState__Sequence__create(size_t size);

/// Destroy array of msg/SpoutState messages.
/**
 * It calls
 * juice_spout_msgs__msg__SpoutState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__msg__SpoutState__Sequence__destroy(juice_spout_msgs__msg__SpoutState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__MSG__SPOUT_STATE__FUNCTIONS_H_
