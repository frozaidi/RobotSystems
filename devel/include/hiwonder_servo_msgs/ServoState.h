// Generated by gencpp from file hiwonder_servo_msgs/ServoState.msg
// DO NOT EDIT!


#ifndef HIWONDER_SERVO_MSGS_MESSAGE_SERVOSTATE_H
#define HIWONDER_SERVO_MSGS_MESSAGE_SERVOSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hiwonder_servo_msgs
{
template <class ContainerAllocator>
struct ServoState_
{
  typedef ServoState_<ContainerAllocator> Type;

  ServoState_()
    : timestamp(0.0)
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , voltage(0)  {
    }
  ServoState_(const ContainerAllocator& _alloc)
    : timestamp(0.0)
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , voltage(0)  {
  (void)_alloc;
    }



   typedef double _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _goal_type;
  _goal_type goal;

   typedef int32_t _position_type;
  _position_type position;

   typedef int32_t _error_type;
  _error_type error;

   typedef int32_t _voltage_type;
  _voltage_type voltage;





  typedef boost::shared_ptr< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> const> ConstPtr;

}; // struct ServoState_

typedef ::hiwonder_servo_msgs::ServoState_<std::allocator<void> > ServoState;

typedef boost::shared_ptr< ::hiwonder_servo_msgs::ServoState > ServoStatePtr;
typedef boost::shared_ptr< ::hiwonder_servo_msgs::ServoState const> ServoStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator1> & lhs, const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator2> & rhs)
{
  return lhs.timestamp == rhs.timestamp &&
    lhs.id == rhs.id &&
    lhs.goal == rhs.goal &&
    lhs.position == rhs.position &&
    lhs.error == rhs.error &&
    lhs.voltage == rhs.voltage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator1> & lhs, const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hiwonder_servo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b563aac8dea8e6fe724e72890a7f1a60";
  }

  static const char* value(const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb563aac8dea8e6feULL;
  static const uint64_t static_value2 = 0x724e72890a7f1a60ULL;
};

template<class ContainerAllocator>
struct DataType< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hiwonder_servo_msgs/ServoState";
  }

  static const char* value(const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 timestamp   # motor state is at this time\n"
"int32 id            # motor id\n"
"int32 goal          # commanded position (in encoder units)\n"
"int32 position      # current position (in encoder units)\n"
"int32 error         # difference between current and goal positions\n"
"int32 voltage       # current voltage (mv)\n"
;
  }

  static const char* value(const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.id);
      stream.next(m.goal);
      stream.next(m.position);
      stream.next(m.error);
      stream.next(m.voltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hiwonder_servo_msgs::ServoState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hiwonder_servo_msgs::ServoState_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<double>::stream(s, indent + "  ", v.timestamp);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "goal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal);
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
    s << indent << "error: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error);
    s << indent << "voltage: ";
    Printer<int32_t>::stream(s, indent + "  ", v.voltage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HIWONDER_SERVO_MSGS_MESSAGE_SERVOSTATE_H