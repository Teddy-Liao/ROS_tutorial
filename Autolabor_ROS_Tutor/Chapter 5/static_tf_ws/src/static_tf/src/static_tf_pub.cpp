#include "ros/ros.h"
#include "tf2_ros/static_transform_broadcaster.h"
#include "geometry_msgs/TransformStamped.h"
#include "tf2/LinearMath/Quaternion.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "static_tf_pub_node");
    ros::NodeHandle nh;
    // 创建静态坐标转换广播器
    tf2_ros::StaticTransformBroadcaster static_tf_broadcaster;
    // 创建坐标系信息
    geometry_msgs::TransformStamped tfs;
    // 设置头信息
    tfs.header.seq = 100;
    tfs.header.stamp = ros::Time::now();
    tfs.header.frame_id = "base_link";
    // 设置子坐标系
    tfs.child_frame_id = "laser";
    // 设置子坐标系相对父坐标系的偏移量
    tfs.transform.translation.x = 0.2;
    tfs.transform.translation.y = 0;
    tfs.transform.translation.z = 0.5;
    // 设置四元数： 把欧拉角转换为四元数
    tf2::Quaternion qtn;
    qtn.setRPY(0,0,0);
    tfs.transform.rotation.x = qtn.getX();
    tfs.transform.rotation.y = qtn.getY();
    tfs.transform.rotation.z = qtn.getZ();
    tfs.transform.rotation.w = qtn.getW();
    // 使用广播器发布坐标系信息
    static_tf_broadcaster.sendTransform(tfs);
    ros::spin();

    return 0;
}
