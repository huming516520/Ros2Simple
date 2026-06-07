// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from data:msg\Test.idl
// generated code does not contain a copyright notice

#ifndef DATA__MSG__DETAIL__TEST__STRUCT_H_
#define DATA__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Test in the package data.
typedef struct test_msgs__msg__Test
{
  bool bool_value;
  uint8_t byte_value;
  uint8_t char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
} test_msgs__msg__Test;

// Struct for a sequence of test_msgs__msg__Test.
typedef struct test_msgs__msg__Test__Sequence
{
  test_msgs__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DATA__MSG__DETAIL__TEST__STRUCT_H_
