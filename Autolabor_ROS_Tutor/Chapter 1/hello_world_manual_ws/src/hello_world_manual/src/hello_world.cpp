#include "ros/ros.h"

int main(int argc, char *argv[])
{
    // ros 节点初始化，字符串代表的是定义该节点的名称
    ros::init(argc,argv,"hello_world_node");
    // 创建ros节点句柄（在这个简单功能里是非必须的）
    ros::NodeHandle nh;
    // 通过ROS日志输出
    ROS_INFO("hello world!");

    
    
    return 0;
}
