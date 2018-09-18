cmake_minimum_required(VERSION 2.8.3)
project(move_turtlesim)

find_package(catkin REQUIRED roscpp turtlesim geometry_msgs)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(move_turtlesim src/main.cpp)
target_link_libraries(move_turtlesim
  ${catkin_LIBRARIES}
)

add_executable(move_circle src/move_circle.cpp)
target_link_libraries(move_circle
  ${catkin_LIBRARIES}
)

add_executable(move_spiral src/move_spiral.cpp)
target_link_libraries(move_spiral
  ${catkin_LIBRARIES}
)

add_executable(make_box src/make_box.cpp)
target_link_libraries(make_box
  ${catkin_LIBRARIES}
)

add_executable(vacuum src/vacuum.cpp)
target_link_libraries(vacuum
  ${catkin_LIBRARIES}
)
