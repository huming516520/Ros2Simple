/**
 * ROS2 Demo - Publisher / Subscriber Example
 *
 * Part of the Ros2Simple project - Windows ROS2 SDK
 * No ROS2 native toolchain required, build with CMake directly.
 *
 * Author  : Hu Ming
 * Email   : huming516520@gmail.com
 * License : Follow ROS2 source code licenses (Apache 2.0 / BSD)
 *
 * Commercial support available. Contact: huming516520@gmail.com
 */

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

class DemoPubSub : public rclcpp::Node
{
public:
    DemoPubSub(const std::string& mode)
        : Node("demo_pubsub_node"), mode_(mode)
    {
        if (mode_ == "pub") {
            publisher_ = this->create_publisher<std_msgs::msg::String>("demo_topic", 10);
            timer_ = this->create_wall_timer(
                std::chrono::seconds(1),
                std::bind(&DemoPubSub::timer_callback, this));
            RCLCPP_INFO(this->get_logger(), "Started in PUBLISHER mode");
        }
        else if (mode_ == "sub") {
            subscription_ = this->create_subscription<std_msgs::msg::String>(
                "demo_topic",
                10,
                std::bind(&DemoPubSub::topic_callback, this, _1));
            RCLCPP_INFO(this->get_logger(), "Started in SUBSCRIBER mode");
        }
        else {
            RCLCPP_ERROR(this->get_logger(), "Unknown mode: %s. Use 'pub' or 'sub'.", mode_.c_str());
            rclcpp::shutdown();
        }
    }

private:
    void timer_callback()
    {
        auto message = std_msgs::msg::String();
        message.data = "Hello, ROS2! Time: " + std::to_string(count_++);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);
    }

    void topic_callback(const std_msgs::msg::String& msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg.data.c_str());
    }

    std::string mode_;
    size_t count_ = 0;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    if (argc < 2) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Usage: ros2 run demo_pubsub demo_pubsub <pub|sub>");
        return 1;
    }

    auto node = std::make_shared<DemoPubSub>(argv[1]);
    //auto node = std::make_shared<DemoPubSub>("pub");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
