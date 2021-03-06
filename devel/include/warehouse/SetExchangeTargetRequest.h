// Generated by gencpp from file warehouse/SetExchangeTargetRequest.msg
// DO NOT EDIT!


#ifndef WAREHOUSE_MESSAGE_SETEXCHANGETARGETREQUEST_H
#define WAREHOUSE_MESSAGE_SETEXCHANGETARGETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace warehouse
{
template <class ContainerAllocator>
struct SetExchangeTargetRequest_
{
  typedef SetExchangeTargetRequest_<ContainerAllocator> Type;

  SetExchangeTargetRequest_()
    : position()  {
    }
  SetExchangeTargetRequest_(const ContainerAllocator& _alloc)
    : position(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetExchangeTargetRequest_

typedef ::warehouse::SetExchangeTargetRequest_<std::allocator<void> > SetExchangeTargetRequest;

typedef boost::shared_ptr< ::warehouse::SetExchangeTargetRequest > SetExchangeTargetRequestPtr;
typedef boost::shared_ptr< ::warehouse::SetExchangeTargetRequest const> SetExchangeTargetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator1> & lhs, const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator1> & lhs, const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace warehouse

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36d11dfc0170b09141da5cca76a491a6";
  }

  static const char* value(const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36d11dfc0170b091ULL;
  static const uint64_t static_value2 = 0x41da5cca76a491a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "warehouse/SetExchangeTargetRequest";
  }

  static const char* value(const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] position\n"
;
  }

  static const char* value(const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetExchangeTargetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::warehouse::SetExchangeTargetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::warehouse::SetExchangeTargetRequest_<ContainerAllocator>& v)
  {
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.position[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAREHOUSE_MESSAGE_SETEXCHANGETARGETREQUEST_H
