// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__FUNCTIONS_H_
#define TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_interfaces/action/detail/turtle_to_goals__struct.h"

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_Goal
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Goal__init(turtle_interfaces__action__TurtleToGoals_Goal * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Goal__fini(turtle_interfaces__action__TurtleToGoals_Goal * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Goal *
turtle_interfaces__action__TurtleToGoals_Goal__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Goal__destroy(turtle_interfaces__action__TurtleToGoals_Goal * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__init(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Goal__Sequence *
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Goal__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Goal__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_Result
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Result__init(turtle_interfaces__action__TurtleToGoals_Result * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Result__fini(turtle_interfaces__action__TurtleToGoals_Result * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Result *
turtle_interfaces__action__TurtleToGoals_Result__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Result__destroy(turtle_interfaces__action__TurtleToGoals_Result * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Result__Sequence__init(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Result__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Result__Sequence *
turtle_interfaces__action__TurtleToGoals_Result__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Result__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Result__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_Feedback
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Feedback__init(turtle_interfaces__action__TurtleToGoals_Feedback * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Feedback__fini(turtle_interfaces__action__TurtleToGoals_Feedback * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Feedback *
turtle_interfaces__action__TurtleToGoals_Feedback__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Feedback__destroy(turtle_interfaces__action__TurtleToGoals_Feedback * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__init(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__fini(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence *
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_Feedback__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_Feedback__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_SendGoal_Request *
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Request * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence *
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Request__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_SendGoal_Response *
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Response * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__init(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__fini(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence *
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_SendGoal_Response__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_GetResult_Request__init(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_GetResult_Request *
turtle_interfaces__action__TurtleToGoals_GetResult_Request__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Request * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__init(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence *
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Request__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_GetResult_Response__init(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_GetResult_Response *
turtle_interfaces__action__TurtleToGoals_GetResult_Response__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Response * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__init(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__fini(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence *
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_GetResult_Response__Sequence * array);

/// Initialize action/TurtleToGoals message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage
 * )) before or use
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg);

/// Finalize action/TurtleToGoals message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg);

/// Create action/TurtleToGoals message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_FeedbackMessage *
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__create();

/// Destroy action/TurtleToGoals message.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__destroy(turtle_interfaces__action__TurtleToGoals_FeedbackMessage * msg);


/// Initialize array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__init(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__fini(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array);

/// Create array of action/TurtleToGoals messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence *
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/TurtleToGoals messages.
/**
 * It calls
 * turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence__destroy(turtle_interfaces__action__TurtleToGoals_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__FUNCTIONS_H_
