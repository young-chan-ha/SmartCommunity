cmake_minimum_required(VERSION 2.8)
project(SmartCommunity)

file(GLOB SRC_FILE *.c)

add_subdirectory(Module/rgb_led)


add_executable(${PROJECT_NAME} ${SRC_FILE})

target_link_libraries(${PROJECT_NAME} rgb_led)


