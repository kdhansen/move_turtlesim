cmake_minimum_required(VERSION 2.8.3)
project(move_turtlesim)

find_package(catkin REQUIRED roscpp turtlesim)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(move_turtlesim src/main.cpp)

target_link_libraries(move_turtlesim
  ${catkin_LIBRARIES}
)
