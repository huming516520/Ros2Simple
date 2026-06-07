// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test:msg\DummyCustomHeaderMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__STRUCT_H_
#define TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__STRUCT_H_

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
#include "std_msgs/msg/detail/color_rgba__struct.h"

/// Struct defined in msg/DummyCustomHeaderMessage in the package test.
/**
  * This is a dummy message type with a custom header field that is not type `Header`.
  * It is intended for use in topic statistics tests.
 */
typedef struct test__msg__DummyCustomHeaderMessage
{
  std_msgs__msg__ColorRGBA header;
} test__msg__DummyCustomHeaderMessage;

// Struct for a sequence of test__msg__DummyCustomHeaderMessage.
typedef struct test__msg__DummyCustomHeaderMessage__Sequence
{
  test__msg__DummyCustomHeaderMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test__msg__DummyCustomHeaderMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__STRUCT_H_
