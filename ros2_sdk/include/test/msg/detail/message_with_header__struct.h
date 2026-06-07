// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test:msg\MessageWithHeader.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__STRUCT_H_
#define TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "test/msg/detail/header__struct.h"

/// Struct defined in msg/MessageWithHeader in the package test.
/**
  * Message containing a simple Header field.
 */
typedef struct test__msg__MessageWithHeader
{
  test__msg__Header header;
} test__msg__MessageWithHeader;

// Struct for a sequence of test__msg__MessageWithHeader.
typedef struct test__msg__MessageWithHeader__Sequence
{
  test__msg__MessageWithHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test__msg__MessageWithHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__STRUCT_H_
