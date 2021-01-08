set(SRC_FILE humiture.c)

link_libraries(wiringPi)

add_library(humiture ${SRC_FILE})