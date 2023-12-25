#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
// 对应ROS官方教程是：
// https://wiki.ros.org/cn/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
int main(int argc, char *argv[])
{

    ros::init(argc, argv, "my_publisher_node");
    ros::NodeHandle nh;
    
    // 创建发布者对象
    // 这里的第二个参数是队列长度，用作缓冲区，若缓冲区溢出会出现消息丢失的情况
    ros::Publisher pub = nh.advertise<std_msgs::String>("my_publisher_topic",10);
    std_msgs::String msg;
    std::string msg_front = "Hello, this is msg front ";

    int count_number = 0;
    ros::Rate loop_rate(1);

    // ros节点没死
    while (ros::ok())
    {
        // 使用 stringstream 拼接字符串与编号
        std::stringstream ss;
        ss << msg_front << count_number;
        // 设置消息的内容
        msg.data = ss.str();
        // 正式发布了消息
        pub.publish(msg);
        // 为了方便调试，打印发送的消息，实际项目中，pub的内容不用显示出来
        ROS_INFO("send messages: %s",msg.data.c_str());

        // 根据前面制定的发送频率自动休眠 休眠时间 = 1/频率；
        loop_rate.sleep();
        count_number++;
        // 用于让程序处理任何待处理的ROS事件，比如接收到的消息、服务请求或其他需要处理的事件。
        // 通常，你会在ROS节点的主循环中找到这行代码，并且它用于保持节点对传入事件的响应性，
        // 同时允许节点执行其他任务。
        ros::spinOnce();
    }
    
    return 0;
}
