// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\String.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__STRING__BUILDER_HPP_
#define TEST__MSG__DETAIL__STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_String_data
{
public:
  Init_String_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::String data(::test::msg::String::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::String msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::String>()
{
  return test::msg::builder::Init_String_data();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__STRING__BUILDER_HPP_
