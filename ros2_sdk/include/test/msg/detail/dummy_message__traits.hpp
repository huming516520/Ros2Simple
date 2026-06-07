// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test:msg\DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_
#define TEST__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test/msg/detail/dummy_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace test
{

namespace msg
{

inline void to_flow_style_yaml(
  const DummyMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DummyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DummyMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace test

namespace rosidl_generator_traits
{

[[deprecated("use test::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const test::msg::DummyMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  test::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test::msg::to_yaml() instead")]]
inline std::string to_yaml(const test::msg::DummyMessage & msg)
{
  return test::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test::msg::DummyMessage>()
{
  return "test::msg::DummyMessage";
}

template<>
inline const char * name<test::msg::DummyMessage>()
{
  return "test/msg/DummyMessage";
}

template<>
struct has_fixed_size<test::msg::DummyMessage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<test::msg::DummyMessage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<test::msg::DummyMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST__MSG__DETAIL__DUMMY_MESSAGE__TRAITS_HPP_
