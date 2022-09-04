// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from service_interface:srv/Force.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "service_interface/srv/detail/force__rosidl_typesupport_introspection_c.h"
#include "service_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "service_interface/srv/detail/force__functions.h"
#include "service_interface/srv/detail/force__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Force_Request__rosidl_typesupport_introspection_c__Force_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  service_interface__srv__Force_Request__init(message_memory);
}

void Force_Request__rosidl_typesupport_introspection_c__Force_Request_fini_function(void * message_memory)
{
  service_interface__srv__Force_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_interface__srv__Force_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_members = {
  "service_interface__srv",  // message namespace
  "Force_Request",  // message name
  1,  // number of fields
  sizeof(service_interface__srv__Force_Request),
  Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_member_array,  // message members
  Force_Request__rosidl_typesupport_introspection_c__Force_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Force_Request__rosidl_typesupport_introspection_c__Force_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_type_support_handle = {
  0,
  &Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Request)() {
  if (!Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_type_support_handle.typesupport_identifier) {
    Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Force_Request__rosidl_typesupport_introspection_c__Force_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "service_interface/srv/detail/force__rosidl_typesupport_introspection_c.h"
// already included above
// #include "service_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "service_interface/srv/detail/force__functions.h"
// already included above
// #include "service_interface/srv/detail/force__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Force_Response__rosidl_typesupport_introspection_c__Force_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  service_interface__srv__Force_Response__init(message_memory);
}

void Force_Response__rosidl_typesupport_introspection_c__Force_Response_fini_function(void * message_memory)
{
  service_interface__srv__Force_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_interface__srv__Force_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(service_interface__srv__Force_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_members = {
  "service_interface__srv",  // message namespace
  "Force_Response",  // message name
  2,  // number of fields
  sizeof(service_interface__srv__Force_Response),
  Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_member_array,  // message members
  Force_Response__rosidl_typesupport_introspection_c__Force_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Force_Response__rosidl_typesupport_introspection_c__Force_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_type_support_handle = {
  0,
  &Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Response)() {
  if (!Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_type_support_handle.typesupport_identifier) {
    Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Force_Response__rosidl_typesupport_introspection_c__Force_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "service_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "service_interface/srv/detail/force__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_members = {
  "service_interface__srv",  // service namespace
  "Force",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_Request_message_type_support_handle,
  NULL  // response message
  // service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_Response_message_type_support_handle
};

static rosidl_service_type_support_t service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_type_support_handle = {
  0,
  &service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_service_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force)() {
  if (!service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_type_support_handle.typesupport_identifier) {
    service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_interface, srv, Force_Response)()->data;
  }

  return &service_interface__srv__detail__force__rosidl_typesupport_introspection_c__Force_service_type_support_handle;
}