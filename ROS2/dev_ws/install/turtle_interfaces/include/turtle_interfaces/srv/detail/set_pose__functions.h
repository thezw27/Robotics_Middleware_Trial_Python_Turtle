// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtle_interfaces:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__FUNCTIONS_H_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtle_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtle_interfaces/srv/detail/set_pose__struct.h"

/// Initialize srv/SetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__srv__SetPose_Request
 * )) before or use
 * turtle_interfaces__srv__SetPose_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__srv__SetPose_Request__init(turtle_interfaces__srv__SetPose_Request * msg);

/// Finalize srv/SetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Request__fini(turtle_interfaces__srv__SetPose_Request * msg);

/// Create srv/SetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__srv__SetPose_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__srv__SetPose_Request *
turtle_interfaces__srv__SetPose_Request__create();

/// Destroy srv/SetPose message.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Request__destroy(turtle_interfaces__srv__SetPose_Request * msg);


/// Initialize array of srv/SetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__srv__SetPose_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__srv__SetPose_Request__Sequence__init(turtle_interfaces__srv__SetPose_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetPose messages.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Request__Sequence__fini(turtle_interfaces__srv__SetPose_Request__Sequence * array);

/// Create array of srv/SetPose messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__srv__SetPose_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__srv__SetPose_Request__Sequence *
turtle_interfaces__srv__SetPose_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetPose messages.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Request__Sequence__destroy(turtle_interfaces__srv__SetPose_Request__Sequence * array);

/// Initialize srv/SetPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtle_interfaces__srv__SetPose_Response
 * )) before or use
 * turtle_interfaces__srv__SetPose_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__srv__SetPose_Response__init(turtle_interfaces__srv__SetPose_Response * msg);

/// Finalize srv/SetPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Response__fini(turtle_interfaces__srv__SetPose_Response * msg);

/// Create srv/SetPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtle_interfaces__srv__SetPose_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__srv__SetPose_Response *
turtle_interfaces__srv__SetPose_Response__create();

/// Destroy srv/SetPose message.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Response__destroy(turtle_interfaces__srv__SetPose_Response * msg);


/// Initialize array of srv/SetPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtle_interfaces__srv__SetPose_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
bool
turtle_interfaces__srv__SetPose_Response__Sequence__init(turtle_interfaces__srv__SetPose_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetPose messages.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Response__Sequence__fini(turtle_interfaces__srv__SetPose_Response__Sequence * array);

/// Create array of srv/SetPose messages.
/**
 * It allocates the memory for the array and calls
 * turtle_interfaces__srv__SetPose_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
turtle_interfaces__srv__SetPose_Response__Sequence *
turtle_interfaces__srv__SetPose_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetPose messages.
/**
 * It calls
 * turtle_interfaces__srv__SetPose_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
void
turtle_interfaces__srv__SetPose_Response__Sequence__destroy(turtle_interfaces__srv__SetPose_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_POSE__FUNCTIONS_H_
