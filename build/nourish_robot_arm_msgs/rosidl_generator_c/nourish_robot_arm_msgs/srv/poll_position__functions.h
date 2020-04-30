// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nourish_robot_arm_msgs:srv/PollPosition.idl
// generated code does not contain a copyright notice

#ifndef NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__FUNCTIONS_H_
#define NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "nourish_robot_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "nourish_robot_arm_msgs/srv/poll_position__struct.h"

/// Initialize srv/PollPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__srv__PollPosition_Request
 * )) before or use
 * nourish_robot_arm_msgs__srv__PollPosition_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__srv__PollPosition_Request__init(nourish_robot_arm_msgs__srv__PollPosition_Request * msg);

/// Finalize srv/PollPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Request__fini(nourish_robot_arm_msgs__srv__PollPosition_Request * msg);

/// Create srv/PollPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__srv__PollPosition_Request *
nourish_robot_arm_msgs__srv__PollPosition_Request__create();

/// Destroy srv/PollPosition message.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Request__destroy(nourish_robot_arm_msgs__srv__PollPosition_Request * msg);


/// Initialize array of srv/PollPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__init(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array, size_t size);

/// Finalize array of srv/PollPosition messages.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__fini(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array);

/// Create array of srv/PollPosition messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence *
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__create(size_t size);

/// Destroy array of srv/PollPosition messages.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence__destroy(nourish_robot_arm_msgs__srv__PollPosition_Request__Sequence * array);

/// Initialize srv/PollPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nourish_robot_arm_msgs__srv__PollPosition_Response
 * )) before or use
 * nourish_robot_arm_msgs__srv__PollPosition_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__srv__PollPosition_Response__init(nourish_robot_arm_msgs__srv__PollPosition_Response * msg);

/// Finalize srv/PollPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Response__fini(nourish_robot_arm_msgs__srv__PollPosition_Response * msg);

/// Create srv/PollPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__srv__PollPosition_Response *
nourish_robot_arm_msgs__srv__PollPosition_Response__create();

/// Destroy srv/PollPosition message.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Response__destroy(nourish_robot_arm_msgs__srv__PollPosition_Response * msg);


/// Initialize array of srv/PollPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
bool
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__init(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array, size_t size);

/// Finalize array of srv/PollPosition messages.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__fini(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array);

/// Create array of srv/PollPosition messages.
/**
 * It allocates the memory for the array and calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence *
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__create(size_t size);

/// Destroy array of srv/PollPosition messages.
/**
 * It calls
 * nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nourish_robot_arm_msgs
void
nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence__destroy(nourish_robot_arm_msgs__srv__PollPosition_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // NOURISH_ROBOT_ARM_MSGS__SRV__POLL_POSITION__FUNCTIONS_H_
