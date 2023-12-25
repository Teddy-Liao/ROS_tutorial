#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"hello_world_node");
    ros::NodeHandle nh;

    while (1){
        ROS_INFO("Hello World from VScode !");
    }



    return 0;
}
