cmake_minimum_required(VERSION 2.8.3)
project(isen_turtlebot_shellcmd)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(itb_shellcmd src/main.cpp)
target_link_libraries(itb_shellcmd ${catkin_LIBRARIES})

#C++11
set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS}")

