// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juice_spout_msgs:action/RunActionRecipe.idl
// generated code does not contain a copyright notice

#ifndef JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__FUNCTIONS_H_
#define JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "juice_spout_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "juice_spout_msgs/action/run_action_recipe__struct.h"

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_Goal
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Goal__init(juice_spout_msgs__action__RunActionRecipe_Goal * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Goal__fini(juice_spout_msgs__action__RunActionRecipe_Goal * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Goal *
juice_spout_msgs__action__RunActionRecipe_Goal__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Goal__destroy(juice_spout_msgs__action__RunActionRecipe_Goal * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence *
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Goal__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Goal__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_Result
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Result__init(juice_spout_msgs__action__RunActionRecipe_Result * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Result__fini(juice_spout_msgs__action__RunActionRecipe_Result * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Result *
juice_spout_msgs__action__RunActionRecipe_Result__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Result__destroy(juice_spout_msgs__action__RunActionRecipe_Result * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Result__Sequence *
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Result__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Result__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_Feedback
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Feedback__init(juice_spout_msgs__action__RunActionRecipe_Feedback * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Feedback__fini(juice_spout_msgs__action__RunActionRecipe_Feedback * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Feedback *
juice_spout_msgs__action__RunActionRecipe_Feedback__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Feedback__destroy(juice_spout_msgs__action__RunActionRecipe_Feedback * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__init(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence *
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_Feedback__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Request__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__init(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence *
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_SendGoal_Response__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_GetResult_Request *
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Request * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence *
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Request__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_GetResult_Response *
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Response * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__init(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence *
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_GetResult_Response__Sequence * array);

/// Initialize action/RunActionRecipe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage
 * )) before or use
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg);

/// Finalize action/RunActionRecipe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg);

/// Create action/RunActionRecipe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage *
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__create();

/// Destroy action/RunActionRecipe message.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__destroy(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage * msg);


/// Initialize array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the number of elements and calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
bool
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__init(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__fini(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array);

/// Create array of action/RunActionRecipe messages.
/**
 * It allocates the memory for the array and calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence *
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/RunActionRecipe messages.
/**
 * It calls
 * juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juice_spout_msgs
void
juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence__destroy(juice_spout_msgs__action__RunActionRecipe_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // JUICE_SPOUT_MSGS__ACTION__RUN_ACTION_RECIPE__FUNCTIONS_H_
