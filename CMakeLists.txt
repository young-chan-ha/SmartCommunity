cmake_minimum_required(VERSION 2.8)
project(SmartCommunity)

file(GLOB SRC_FILE *.c)
add_definitions( -lwiringPi)

link_libraries(wiringPi)
add_executable(${PROJECT_NAME} ${SRC_FILE})
