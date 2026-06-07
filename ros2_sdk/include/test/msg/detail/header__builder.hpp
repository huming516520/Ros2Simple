// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\Header.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__HEADER__BUILDER_HPP_
#define TEST__MSG__DETAIL__HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_Header_stamp
{
public:
  Init_Header_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::Header stamp(::test::msg::Header::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::Header>()
{
  return test::msg::builder::Init_Header_stamp();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__HEADER__BUILDER_HPP_
