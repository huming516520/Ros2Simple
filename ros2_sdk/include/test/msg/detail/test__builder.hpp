// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test:msg\Test.idl
// generated code does not contain a copyright notice

#ifndef TEST__MSG__DETAIL__TEST__BUILDER_HPP_
#define TEST__MSG__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "test/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test
{

namespace msg
{

namespace builder
{

class Init_Test_test
{
public:
  Init_Test_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test::msg::Test test(::test::msg::Test::_test_type arg)
  {
    msg_.test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test::msg::Test>()
{
  return test::msg::builder::Init_Test_test();
}

}  // namespace test

#endif  // TEST__MSG__DETAIL__TEST__BUILDER_HPP_
