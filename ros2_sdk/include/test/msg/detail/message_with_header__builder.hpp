// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\MessageWithHeader.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__BUILDER_HPP_
#define TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/message_with_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_MessageWithHeader_header
{
public:
  Init_MessageWithHeader_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::MessageWithHeader header(::test::msg::MessageWithHeader::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::MessageWithHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::MessageWithHeader>()
{
  return test::msg::builder::Init_MessageWithHeader_header();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__MESSAGE_WITH_HEADER__BUILDER_HPP_
