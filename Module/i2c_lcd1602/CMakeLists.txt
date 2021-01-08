set(SRC_FILE i2c_lcd1602.c)

link_libraries(wiringPi)
add_library(i2c_lcd1602 ${SRC_FILE})

