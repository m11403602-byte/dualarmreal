// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hiwin_msgs:msg/SystemIOStates.idl
// generated code does not contain a copyright notice

#ifndef HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__FUNCTIONS_H_
#define HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hiwin_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hiwin_msgs/msg/detail/system_io_states__struct.h"

/// Initialize msg/SystemIOStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hiwin_msgs__msg__SystemIOStates
 * )) before or use
 * hiwin_msgs__msg__SystemIOStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__init(hiwin_msgs__msg__SystemIOStates * msg);

/// Finalize msg/SystemIOStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
void
hiwin_msgs__msg__SystemIOStates__fini(hiwin_msgs__msg__SystemIOStates * msg);

/// Create msg/SystemIOStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hiwin_msgs__msg__SystemIOStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
hiwin_msgs__msg__SystemIOStates *
hiwin_msgs__msg__SystemIOStates__create();

/// Destroy msg/SystemIOStates message.
/**
 * It calls
 * hiwin_msgs__msg__SystemIOStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
void
hiwin_msgs__msg__SystemIOStates__destroy(hiwin_msgs__msg__SystemIOStates * msg);

/// Check for msg/SystemIOStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__are_equal(const hiwin_msgs__msg__SystemIOStates * lhs, const hiwin_msgs__msg__SystemIOStates * rhs);

/// Copy a msg/SystemIOStates message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__copy(
  const hiwin_msgs__msg__SystemIOStates * input,
  hiwin_msgs__msg__SystemIOStates * output);

/// Initialize array of msg/SystemIOStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * hiwin_msgs__msg__SystemIOStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__Sequence__init(hiwin_msgs__msg__SystemIOStates__Sequence * array, size_t size);

/// Finalize array of msg/SystemIOStates messages.
/**
 * It calls
 * hiwin_msgs__msg__SystemIOStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
void
hiwin_msgs__msg__SystemIOStates__Sequence__fini(hiwin_msgs__msg__SystemIOStates__Sequence * array);

/// Create array of msg/SystemIOStates messages.
/**
 * It allocates the memory for the array and calls
 * hiwin_msgs__msg__SystemIOStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
hiwin_msgs__msg__SystemIOStates__Sequence *
hiwin_msgs__msg__SystemIOStates__Sequence__create(size_t size);

/// Destroy array of msg/SystemIOStates messages.
/**
 * It calls
 * hiwin_msgs__msg__SystemIOStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
void
hiwin_msgs__msg__SystemIOStates__Sequence__destroy(hiwin_msgs__msg__SystemIOStates__Sequence * array);

/// Check for msg/SystemIOStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__Sequence__are_equal(const hiwin_msgs__msg__SystemIOStates__Sequence * lhs, const hiwin_msgs__msg__SystemIOStates__Sequence * rhs);

/// Copy an array of msg/SystemIOStates messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hiwin_msgs
bool
hiwin_msgs__msg__SystemIOStates__Sequence__copy(
  const hiwin_msgs__msg__SystemIOStates__Sequence * input,
  hiwin_msgs__msg__SystemIOStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HIWIN_MSGS__MSG__DETAIL__SYSTEM_IO_STATES__FUNCTIONS_H_
