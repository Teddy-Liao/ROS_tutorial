#include "create_head_file/my_head.h"
#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "create_head_file_node");
    ros::NodeHandle nh;

    my_ns::my_class MY_CLASS;

    MY_CLASS.run();

    return 0;
}
