cmake_minimum_required(VERSION 3.10)
project(RobotProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(robot_app
    src/robot.cpp
    src/deliveryRobot.cpp
    src/travellingRobot.cpp
    src/armRobot.cpp
    main.cpp
)
