#include "ros/ros.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "geometry_msgs/PointStamped.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "static_tf_sub_node");
    ros::NodeHandle nh;
    // 创建TF订阅节点
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener static_tf_listener(buffer);

    ros::Rate rate(1);
    while (ros::ok()){
        // 在子坐标系中生成一个坐标点
        geometry_msgs::PointStamped point_laser;
        point_laser.header.frame_id = "laser";
        point_laser.header.stamp = ros::Time::now();
        // 是指该点在laser坐标系中的坐标位置
        point_laser.point.x = 1;
        point_laser.point.y = 2;
        point_laser.point.z = 7.3;

        try
        {
            geometry_msgs::PointStamped point_base;
            point_base = buffer.transform(point_laser, "base_link");
            ROS_INFO("coordinate after transform: (%.2f,%.2f,%.2f), the reference frame is ",
                        point_base.point.x,
                        point_base.point.y,
                        point_base.point.z,
                        point_base.header.frame_id.c_str());
            
        }
        catch(const std::exception& e)
        {
            ROS_INFO("There is an error");
        }

        rate.sleep();
        ros::spinOnce();
        


    }
    

    return 0;
}
