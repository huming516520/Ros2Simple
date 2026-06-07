// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from test:msg\DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__DUMMY_MESSAGE__FUNCTIONS_H_
#define TEST__MSG__DETAIL__DUMMY_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "test/msg/rosidl_generator_c__visibility_control.h"

#include "test/msg/detail/dummy_message__struct.h"

/// Initialize msg/DummyMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test__msg__DummyMessage
 * )) before or use
 * test__msg__DummyMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__init(test__msg__DummyMessage * msg);

/// Finalize msg/DummyMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
void
test__msg__DummyMessage__fini(test__msg__DummyMessage * msg);

/// Create msg/DummyMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test__msg__DummyMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test
test__msg__DummyMessage *
test__msg__DummyMessage__create();

/// Destroy msg/DummyMessage message.
/**
 * It calls
 * test__msg__DummyMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
void
test__msg__DummyMessage__destroy(test__msg__DummyMessage * msg);

/// Check for msg/DummyMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__are_equal(const test__msg__DummyMessage * lhs, const test__msg__DummyMessage * rhs);

/// Copy a msg/DummyMessage message.
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
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__copy(
  const test__msg__DummyMessage * input,
  test__msg__DummyMessage * output);

/// Initialize array of msg/DummyMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * test__msg__DummyMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__Sequence__init(test__msg__DummyMessage__Sequence * array, size_t size);

/// Finalize array of msg/DummyMessage messages.
/**
 * It calls
 * test__msg__DummyMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
void
test__msg__DummyMessage__Sequence__fini(test__msg__DummyMessage__Sequence * array);

/// Create array of msg/DummyMessage messages.
/**
 * It allocates the memory for the array and calls
 * test__msg__DummyMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test
test__msg__DummyMessage__Sequence *
test__msg__DummyMessage__Sequence__create(size_t size);

/// Destroy array of msg/DummyMessage messages.
/**
 * It calls
 * test__msg__DummyMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
void
test__msg__DummyMessage__Sequence__destroy(test__msg__DummyMessage__Sequence * array);

/// Check for msg/DummyMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__Sequence__are_equal(const test__msg__DummyMessage__Sequence * lhs, const test__msg__DummyMessage__Sequence * rhs);

/// Copy an array of msg/DummyMessage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_test
bool
test__msg__DummyMessage__Sequence__copy(
  const test__msg__DummyMessage__Sequence * input,
  test__msg__DummyMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TEST__MSG__DETAIL__DUMMY_MESSAGE__FUNCTIONS_H_
