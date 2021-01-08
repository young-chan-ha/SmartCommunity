
/****************************************
# －－－－湖南创乐博智能科技有限公司－－－－
#  文件名：02_Rgb_Led.c
#  版本：V2.0
#  author: zhulin
# 说明：RGB-LED传感器实验
*****************************************/
#include "rgb_led.h"

int led_pinRed;
int led_pinGreen;
int led_pinBlue;
// LED 初始化
void led_init(int led_pin_red, int led_pin_green, int led_pin_blue)
{
    led_pinRed = led_pin_red;
    led_pinGreen = led_pin_green;
    led_pinBlue = led_pin_blue;

    softPwmCreate(led_pinRed, 0, 100);
    softPwmCreate(led_pinGreen, 0, 100);
    softPwmCreate(led_pinBlue, 0, 100);
}
// LED 颜色设置
void led_Color_Set(uchar r_val, uchar g_val, uchar b_val)
{
    softPwmWrite(led_pinRed, r_val);
    softPwmWrite(led_pinGreen, g_val);
    softPwmWrite(led_pinBlue, b_val);
}
