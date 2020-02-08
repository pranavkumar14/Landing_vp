// Generated by gencpp from file mavros_msgs/FileClose.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILECLOSE_H
#define MAVROS_MSGS_MESSAGE_FILECLOSE_H

#include <ros/service_traits.h>


#include <mavros_msgs/FileCloseRequest.h>
#include <mavros_msgs/FileCloseResponse.h>


namespace mavros_msgs
{

struct FileClose
{

typedef FileCloseRequest Request;
typedef FileCloseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FileClose
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::FileClose > {
  static const char* value()
  {
    return "1c309002d7f7c6df7d3f094925ea8e10";
  }

  static const char* value(const ::mavros_msgs::FileClose&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::FileClose > {
  static const char* value()
  {
    return "mavros_msgs/FileClose";
  }

  static const char* value(const ::mavros_msgs::FileClose&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::FileCloseRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::FileClose > 
template<>
struct MD5Sum< ::mavros_msgs::FileCloseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::FileClose >::value();
  }
  static const char* value(const ::mavros_msgs::FileCloseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::FileCloseRequest> should match 
// service_traits::DataType< ::mavros_msgs::FileClose > 
template<>
struct DataType< ::mavros_msgs::FileCloseRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::FileClose >::value();
  }
  static const char* value(const ::mavros_msgs::FileCloseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::FileCloseResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::FileClose > 
template<>
struct MD5Sum< ::mavros_msgs::FileCloseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::FileClose >::value();
  }
  static const char* value(const ::mavros_msgs::FileCloseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::FileCloseResponse> should match 
// service_traits::DataType< ::mavros_msgs::FileClose > 
template<>
struct DataType< ::mavros_msgs::FileCloseResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::FileClose >::value();
  }
  static const char* value(const ::mavros_msgs::FileCloseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILECLOSE_H
