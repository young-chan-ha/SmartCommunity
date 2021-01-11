set(SRC_FILE relay.c)

link_libraries(wiringPi)
add_library(relay ${SRC_FILE})

