// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\DummyCustomHeaderMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__BUILDER_HPP_
#define TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/dummy_custom_header_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_DummyCustomHeaderMessage_header
{
public:
  Init_DummyCustomHeaderMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::DummyCustomHeaderMessage header(::test::msg::DummyCustomHeaderMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::DummyCustomHeaderMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::DummyCustomHeaderMessage>()
{
  return test::msg::builder::Init_DummyCustomHeaderMessage_header();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__DUMMY_CUSTOM_HEADER_MESSAGE__BUILDER_HPP_
