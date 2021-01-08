cmake_minimum_required(VERSION 2.8)
project(SmartCommunity)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


file(GLOB SRC_FILE *.c)

add_subdirectory(Module/rgb_led)

add_subdirectory(Module/i2c_lcd1602)

add_subdirectory(Module/humiture)



add_executable(${PROJECT_NAME} ${SRC_FILE})

target_link_libraries(${PROJECT_NAME} 
rgb_led
i2c_lcd1602
humiture)


