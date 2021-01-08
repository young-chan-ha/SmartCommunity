set(SRC_FILE rgb_led.c)

link_libraries(wiringPi)
add_library(rgb_led ${SRC_FILE})

