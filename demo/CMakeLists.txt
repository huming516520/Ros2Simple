cmake_minimum_required(VERSION 3.10)
project(demo_pubsub)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Manually specify the ROS2 SDK path, modify to your own path
set(ROS2_DIR "../ros2_sdk")

# Include ROS2 headers
include_directories(
    ${ROS2_DIR}/include
)

# Add ROS2 library path
link_directories(
    ${ROS2_DIR}/lib
)

# Source files
add_executable(demo_pubsub src/talker.cpp)

# Required ROS2 libraries
target_link_libraries(demo_pubsub
    ros2
    rcutils
    rmw
    rosidl_typesupport_cpp
    std_msgs
    statistics_msgs
)

# Windows requires linking ws2_32 for networking
if(WIN32)
    target_link_libraries(demo_pubsub ws2_32)
endif()
