#include "ros/ros.h"
#include "std_msgs/String.h"

void doMsg(const std_msgs::String::ConstPtr& msg_p);

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "my_listener_node");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe<std_msgs::String>("my_publisher_topic", 10, doMsg);
    //循环读取接收的数据，并调用回调函数处理
    ros::spin();

    return 0;
}

void doMsg(const std_msgs::String::ConstPtr& msg_p){
    
    ROS_INFO("I have received: %s",msg_p->data.c_str());  

};