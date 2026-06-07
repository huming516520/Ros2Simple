// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test:msg\Test.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__TEST__STRUCT_H_
#define TEST__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'test'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Test in the package test.
typedef struct test__msg__Test
{
  rosidl_runtime_c__String test;
} test__msg__Test;

// Struct for a sequence of test__msg__Test.
typedef struct test__msg__Test__Sequence
{
  test__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST__MSG__DETAIL__TEST__STRUCT_H_
