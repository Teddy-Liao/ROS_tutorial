#include "create_head_file/my_head.h"
#include "ros/ros.h"

namespace my_ns{

    void my_class::run(){
        ROS_INFO("This message is printed by run()");
        ROS_WARN("Test of ROS_WARN, the font color should be yellow");
        ROS_ERROR("THe font color maybe red");
    }

}
