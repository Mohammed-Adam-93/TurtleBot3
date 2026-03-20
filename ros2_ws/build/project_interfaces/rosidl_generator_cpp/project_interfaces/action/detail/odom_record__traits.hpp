// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_interfaces:action/OdomRecord.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__TRAITS_HPP_
#define PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__TRAITS_HPP_

#include "project_interfaces/action/detail/odom_record__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_Goal>()
{
  return "project_interfaces::action::OdomRecord_Goal";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_Goal>()
{
  return "project_interfaces/action/OdomRecord_Goal";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_Result>()
{
  return "project_interfaces::action::OdomRecord_Result";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_Result>()
{
  return "project_interfaces/action/OdomRecord_Result";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_Feedback>()
{
  return "project_interfaces::action::OdomRecord_Feedback";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_Feedback>()
{
  return "project_interfaces/action/OdomRecord_Feedback";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "project_interfaces/action/detail/odom_record__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_SendGoal_Request>()
{
  return "project_interfaces::action::OdomRecord_SendGoal_Request";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_SendGoal_Request>()
{
  return "project_interfaces/action/OdomRecord_SendGoal_Request";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<project_interfaces::action::OdomRecord_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<project_interfaces::action::OdomRecord_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_SendGoal_Response>()
{
  return "project_interfaces::action::OdomRecord_SendGoal_Response";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_SendGoal_Response>()
{
  return "project_interfaces/action/OdomRecord_SendGoal_Response";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_SendGoal>()
{
  return "project_interfaces::action::OdomRecord_SendGoal";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_SendGoal>()
{
  return "project_interfaces/action/OdomRecord_SendGoal";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interfaces::action::OdomRecord_SendGoal_Request>::value &&
    has_fixed_size<project_interfaces::action::OdomRecord_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interfaces::action::OdomRecord_SendGoal_Request>::value &&
    has_bounded_size<project_interfaces::action::OdomRecord_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<project_interfaces::action::OdomRecord_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<project_interfaces::action::OdomRecord_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interfaces::action::OdomRecord_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_GetResult_Request>()
{
  return "project_interfaces::action::OdomRecord_GetResult_Request";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_GetResult_Request>()
{
  return "project_interfaces/action/OdomRecord_GetResult_Request";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "project_interfaces/action/detail/odom_record__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_GetResult_Response>()
{
  return "project_interfaces::action::OdomRecord_GetResult_Response";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_GetResult_Response>()
{
  return "project_interfaces/action/OdomRecord_GetResult_Response";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<project_interfaces::action::OdomRecord_Result>::value> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<project_interfaces::action::OdomRecord_Result>::value> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_GetResult>()
{
  return "project_interfaces::action::OdomRecord_GetResult";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_GetResult>()
{
  return "project_interfaces/action/OdomRecord_GetResult";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interfaces::action::OdomRecord_GetResult_Request>::value &&
    has_fixed_size<project_interfaces::action::OdomRecord_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interfaces::action::OdomRecord_GetResult_Request>::value &&
    has_bounded_size<project_interfaces::action::OdomRecord_GetResult_Response>::value
  >
{
};

template<>
struct is_service<project_interfaces::action::OdomRecord_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<project_interfaces::action::OdomRecord_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interfaces::action::OdomRecord_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "project_interfaces/action/detail/odom_record__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interfaces::action::OdomRecord_FeedbackMessage>()
{
  return "project_interfaces::action::OdomRecord_FeedbackMessage";
}

template<>
inline const char * name<project_interfaces::action::OdomRecord_FeedbackMessage>()
{
  return "project_interfaces/action/OdomRecord_FeedbackMessage";
}

template<>
struct has_fixed_size<project_interfaces::action::OdomRecord_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<project_interfaces::action::OdomRecord_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interfaces::action::OdomRecord_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<project_interfaces::action::OdomRecord_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interfaces::action::OdomRecord_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<project_interfaces::action::OdomRecord>
  : std::true_type
{
};

template<>
struct is_action_goal<project_interfaces::action::OdomRecord_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<project_interfaces::action::OdomRecord_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<project_interfaces::action::OdomRecord_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROJECT_INTERFACES__ACTION__DETAIL__ODOM_RECORD__TRAITS_HPP_
