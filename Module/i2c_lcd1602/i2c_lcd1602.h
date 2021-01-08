/*
 * @Delcdription: 液晶显示屏
 * @Author: Aster
 */

#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <string.h>

void lcd_write_word(int data);
void lcd_send_command(int comm);
void lcd_send_data(int data);
void lcd_init();
void lcd_clear();
void lcd_write(int lcd_x, int lcd_y, char data[]);



