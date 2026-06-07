// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\DummyMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_
#define TEST__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/dummy_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_DummyMessage_header
{
public:
  Init_DummyMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::DummyMessage header(::test::msg::DummyMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::DummyMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::DummyMessage>()
{
  return test::msg::builder::Init_DummyMessage_header();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__DUMMY_MESSAGE__BUILDER_HPP_
