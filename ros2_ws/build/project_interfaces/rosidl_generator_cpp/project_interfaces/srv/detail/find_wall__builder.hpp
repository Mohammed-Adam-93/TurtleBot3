// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_
#define PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_

#include "project_interfaces/srv/detail/find_wall__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace project_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interfaces::srv::FindWall_Request>()
{
  return ::project_interfaces::srv::FindWall_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace project_interfaces


namespace project_interfaces
{

namespace srv
{

namespace builder
{

class Init_FindWall_Response_wallfound
{
public:
  Init_FindWall_Response_wallfound()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interfaces::srv::FindWall_Response wallfound(::project_interfaces::srv::FindWall_Response::_wallfound_type arg)
  {
    msg_.wallfound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interfaces::srv::FindWall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interfaces::srv::FindWall_Response>()
{
  return project_interfaces::srv::builder::Init_FindWall_Response_wallfound();
}

}  // namespace project_interfaces

#endif  // PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__BUILDER_HPP_
