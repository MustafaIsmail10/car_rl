// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from service_interface:srv/Force.idl
// generated code does not contain a copyright notice

#ifndef SERVICE_INTERFACE__SRV__DETAIL__FORCE__STRUCT_HPP_
#define SERVICE_INTERFACE__SRV__DETAIL__FORCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__service_interface__srv__Force_Request __attribute__((deprecated))
#else
# define DEPRECATED__service_interface__srv__Force_Request __declspec(deprecated)
#endif

namespace service_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Force_Request_
{
  using Type = Force_Request_<ContainerAllocator>;

  explicit Force_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Force_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    service_interface::srv::Force_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_interface::srv::Force_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_interface::srv::Force_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_interface::srv::Force_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_interface::srv::Force_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_interface::srv::Force_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_interface::srv::Force_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_interface::srv::Force_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_interface::srv::Force_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_interface::srv::Force_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_interface__srv__Force_Request
    std::shared_ptr<service_interface::srv::Force_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_interface__srv__Force_Request
    std::shared_ptr<service_interface::srv::Force_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Force_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Force_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Force_Request_

// alias to use template instance with default allocator
using Force_Request =
  service_interface::srv::Force_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_interface


#ifndef _WIN32
# define DEPRECATED__service_interface__srv__Force_Response __attribute__((deprecated))
#else
# define DEPRECATED__service_interface__srv__Force_Response __declspec(deprecated)
#endif

namespace service_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Force_Response_
{
  using Type = Force_Response_<ContainerAllocator>;

  explicit Force_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit Force_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    service_interface::srv::Force_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const service_interface::srv::Force_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<service_interface::srv::Force_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<service_interface::srv::Force_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      service_interface::srv::Force_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<service_interface::srv::Force_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      service_interface::srv::Force_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<service_interface::srv::Force_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<service_interface::srv::Force_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<service_interface::srv::Force_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__service_interface__srv__Force_Response
    std::shared_ptr<service_interface::srv::Force_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__service_interface__srv__Force_Response
    std::shared_ptr<service_interface::srv::Force_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Force_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Force_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Force_Response_

// alias to use template instance with default allocator
using Force_Response =
  service_interface::srv::Force_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace service_interface

namespace service_interface
{

namespace srv
{

struct Force
{
  using Request = service_interface::srv::Force_Request;
  using Response = service_interface::srv::Force_Response;
};

}  // namespace srv

}  // namespace service_interface

#endif  // SERVICE_INTERFACE__SRV__DETAIL__FORCE__STRUCT_HPP_