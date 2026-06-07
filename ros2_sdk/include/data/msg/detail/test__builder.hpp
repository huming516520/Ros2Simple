// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from data:msg\Test.idl
// generated code does not contain a copyright notice

#ifndef DATA__MSG__DETAIL__TEST__BUILDER_HPP_
#define DATA__MSG__DETAIL__TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "data/msg/detail/test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace test_msgs
{

namespace msg
{

namespace builder
{

class Init_Test_uint64_value
{
public:
  explicit Init_Test_uint64_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  ::test_msgs::msg::Test uint64_value(::test_msgs::msg::Test::_uint64_value_type arg)
  {
    msg_.uint64_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_int64_value
{
public:
  explicit Init_Test_int64_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_uint64_value int64_value(::test_msgs::msg::Test::_int64_value_type arg)
  {
    msg_.int64_value = std::move(arg);
    return Init_Test_uint64_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_uint32_value
{
public:
  explicit Init_Test_uint32_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_int64_value uint32_value(::test_msgs::msg::Test::_uint32_value_type arg)
  {
    msg_.uint32_value = std::move(arg);
    return Init_Test_int64_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_int32_value
{
public:
  explicit Init_Test_int32_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_uint32_value int32_value(::test_msgs::msg::Test::_int32_value_type arg)
  {
    msg_.int32_value = std::move(arg);
    return Init_Test_uint32_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_uint16_value
{
public:
  explicit Init_Test_uint16_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_int32_value uint16_value(::test_msgs::msg::Test::_uint16_value_type arg)
  {
    msg_.uint16_value = std::move(arg);
    return Init_Test_int32_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_int16_value
{
public:
  explicit Init_Test_int16_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_uint16_value int16_value(::test_msgs::msg::Test::_int16_value_type arg)
  {
    msg_.int16_value = std::move(arg);
    return Init_Test_uint16_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_uint8_value
{
public:
  explicit Init_Test_uint8_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_int16_value uint8_value(::test_msgs::msg::Test::_uint8_value_type arg)
  {
    msg_.uint8_value = std::move(arg);
    return Init_Test_int16_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_int8_value
{
public:
  explicit Init_Test_int8_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_uint8_value int8_value(::test_msgs::msg::Test::_int8_value_type arg)
  {
    msg_.int8_value = std::move(arg);
    return Init_Test_uint8_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_float64_value
{
public:
  explicit Init_Test_float64_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_int8_value float64_value(::test_msgs::msg::Test::_float64_value_type arg)
  {
    msg_.float64_value = std::move(arg);
    return Init_Test_int8_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_float32_value
{
public:
  explicit Init_Test_float32_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_float64_value float32_value(::test_msgs::msg::Test::_float32_value_type arg)
  {
    msg_.float32_value = std::move(arg);
    return Init_Test_float64_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_char_value
{
public:
  explicit Init_Test_char_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_float32_value char_value(::test_msgs::msg::Test::_char_value_type arg)
  {
    msg_.char_value = std::move(arg);
    return Init_Test_float32_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_byte_value
{
public:
  explicit Init_Test_byte_value(::test_msgs::msg::Test & msg)
  : msg_(msg)
  {}
  Init_Test_char_value byte_value(::test_msgs::msg::Test::_byte_value_type arg)
  {
    msg_.byte_value = std::move(arg);
    return Init_Test_char_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

class Init_Test_bool_value
{
public:
  Init_Test_bool_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_byte_value bool_value(::test_msgs::msg::Test::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return Init_Test_byte_value(msg_);
  }

private:
  ::test_msgs::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_msgs::msg::Test>()
{
  return test_msgs::msg::builder::Init_Test_bool_value();
}

}  // namespace test_msgs

#endif  // DATA__MSG__DETAIL__TEST__BUILDER_HPP_
