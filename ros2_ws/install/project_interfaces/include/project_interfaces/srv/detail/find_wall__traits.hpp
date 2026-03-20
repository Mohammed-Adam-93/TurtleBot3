// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_interfaces:srv/FindWall.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__TRAITS_HPP_
#define PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__TRAITS_HPP_

#include "project_interfaces/srv/detail/find_wall__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::srv::FindWall_Request>()
{
  return "project_interfaces::srv::FindWall_Request";
}

template<>
inline const char * name<project_interfaces::srv::FindWall_Request>()
{
  return "project_interfaces/srv/FindWall_Request";
}

template<>
struct has_fixed_size<project_interfaces::srv::FindWall_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_interfaces::srv::FindWall_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_interfaces::srv::FindWall_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::srv::FindWall_Response>()
{
  return "project_interfaces::srv::FindWall_Response";
}

template<>
inline const char * name<project_interfaces::srv::FindWall_Response>()
{
  return "project_interfaces/srv/FindWall_Response";
}

template<>
struct has_fixed_size<project_interfaces::srv::FindWall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_interfaces::srv::FindWall_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_interfaces::srv::FindWall_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::srv::FindWall>()
{
  return "project_interfaces::srv::FindWall";
}

template<>
inline const char * name<project_interfaces::srv::FindWall>()
{
  return "project_interfaces/srv/FindWall";
}

template<>
struct has_fixed_size<project_interfaces::srv::FindWall>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interfaces::srv::FindWall_Request>::value &&
    has_fixed_size<project_interfaces::srv::FindWall_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interfaces::srv::FindWall>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interfaces::srv::FindWall_Request>::value &&
    has_bounded_size<project_interfaces::srv::FindWall_Response>::value
  >
{
};

template<>
struct is_service<project_interfaces::srv::FindWall>
  : std::true_type
{
};

template<>
struct is_service_request<project_interfaces::srv::FindWall_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interfaces::srv::FindWall_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PROJECT_INTERFACES__SRV__DETAIL__FIND_WALL__TRAITS_HPP_
