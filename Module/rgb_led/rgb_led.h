#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>

#define uchar unsigned char


void led_init(int led_pin_red, int led_pin_green, int led_pin_blue);
void led_Color_Set(uchar r_val, uchar g_val, uchar b_val);
