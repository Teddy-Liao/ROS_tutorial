#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include <cmath>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "points_and_lines");
    ros::NodeHandle n;
    ros::Rate r(30); //表示ROS节点的循环将以每秒30次的频率运行

    ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 10);
    
    float f = 0.0;
    while (ros::ok())
    {
        visualization_msgs::Marker points, line_strip, line_list;

        points.header.frame_id = line_strip.header.frame_id = line_list.header.frame_id = "my_frame";
        points.header.stamp = line_strip.header.stamp = line_list.header.stamp = ros::Time::now();
        // 将不同的图形设置在不同的命名空间，在rviz里有点像“不同图层”的概念
        // 在rviz中可以选择显示/不显示某个namespace
        points.ns = "points_namespace";
        line_strip.ns = "line_strip_namespace";
        line_list.ns = "line_list_namespace";
        points.action = line_strip.action = line_list.action = visualization_msgs::Marker::ADD;
        points.pose.orientation.w = line_strip.pose.orientation.w = line_list.pose.orientation.w = 1.0;

        points.id = 0;
        line_strip.id = 1;
        line_list.id = 2;

        points.type = visualization_msgs::Marker::POINTS;
        line_strip.type = visualization_msgs::Marker::LINE_STRIP;
        line_list.type = visualization_msgs::Marker::LINE_LIST;


        points.scale.x = 0.2; // width
        points.scale.y = 0.2; // height

        line_strip.scale.x = 0.1; // line width
        line_list.scale.x = 0.1; // line width

        points.color.r = 0.0f;
        points.color.g = 1.0f;
        points.color.b = 0.0f;
        points.color.a = 1.0f;

        line_strip.color.r = 0.0f;
        line_strip.color.g = 0.0f;
        line_strip.color.b = 1.0f;
        line_strip.color.a = 1.0f;

        line_list.color.r = 1.0f;
        line_list.color.g = 0.0f;
        line_list.color.b = 0.0f;
        line_list.color.a = 1.0f;

        for (uint32_t i = 0; i < 100; ++i)
        {
            float y = 5 * sin(f + i / 100.0f * 2 * M_PI);
            float z = 5 * cos(f + i / 100.0f * 2 * M_PI);

            geometry_msgs::Point p;
            p.x = (int32_t)i - 50;
            p.y = y;
            p.z = z;

            points.points.push_back(p);
            line_strip.points.push_back(p);

            line_list.points.push_back(p);
            p.z += 1.0;
            line_list.points.push_back(p);
        }
        
        marker_pub.publish(points);
        marker_pub.publish(line_strip);
        marker_pub.publish(line_list);

        r.sleep();
        f += 0.04;

    }
    
    return 0;
}
