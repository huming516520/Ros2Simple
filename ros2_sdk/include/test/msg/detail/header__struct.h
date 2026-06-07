// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test:msg\Header.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__HEADER__STRUCT_H_
#define TEST__MSG__DETAIL__HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/Header in the package test.
/**
  * Simple Header message with a timestamp field.
 */
typedef struct test__msg__Header
{
  builtin_interfaces__msg__Time stamp;
} test__msg__Header;

// Struct for a sequence of test__msg__Header.
typedef struct test__msg__Header__Sequence
{
  test__msg__Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test__msg__Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST__MSG__DETAIL__HEADER__STRUCT_H_
