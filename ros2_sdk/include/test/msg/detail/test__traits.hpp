// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test:msg\Test.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__TEST__TRAITS_HPP_
#define TEST__MSG__DETAIL__TEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "test/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace test
{

namespace msg
{

inline void to_flow_style_yaml(
  const Test & msg,
  std::ostream & out)
{
  out << "{";
  // member: test
  {
    out << "test: ";
    rosidl_generator_traits::value_to_yaml(msg.test, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Test & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: test
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "test: ";
    rosidl_generator_traits::value_to_yaml(msg.test, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Test & msg, bool use_flow_style = false)
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
  const test::msg::Test & msg,
  std::ostream & out, size_t indentation = 0)
{
  test::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use test::msg::to_yaml() instead")]]
inline std::string to_yaml(const test::msg::Test & msg)
{
  return test::msg::to_yaml(msg);
}

template<>
inline const char * data_type<test::msg::Test>()
{
  return "test::msg::Test";
}

template<>
inline const char * name<test::msg::Test>()
{
  return "test/msg/Test";
}

template<>
struct has_fixed_size<test::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test::msg::Test>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST__MSG__DETAIL__TEST__TRAITS_HPP_
