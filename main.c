/*
 * @Author: your name
 * @Date: 2021-01-08 03:36:25
 * @LastEditTime: 2021-01-08 21:29:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /SmartCommunity/main.c
 */

#include "Module/rgb_led/rgb_led.h"
#include "Module/i2c_lcd1602/i2c_lcd1602.h"
#include "Module/humiture/humiture.h"

#include <wiringPi.h>
#include <time.h>

int initialize()
{
    if (-1 == wiringPiSetup())
    {
        printf("wiringPi 初始化失败");
        return 1;
    }

    lcd_init();
    led_init(23, 22, 21);
    return 0;
}

int main()
{

    initialize();

    int *t = NULL;
    char msg[255] = "";
    char date[255] = "";
    time_t timep;
    struct tm *p;

    while (1)
    {
        t = humiture_read_dht11_dat();
        if (t)
        {
            sprintf(msg, "H=%d.%d%% T=%d.%d*C",
                    t[0], t[1], t[2], t[3]);
            lcd_write(0, 0, msg);
            if (t[0] > 65)
            {
                led_Color_Set(0x00, 0x00, 0xff);
            }
            else if (t[0] <= 65 && t[0] > 45)
            {
                led_Color_Set(0x00, 0xff, 0x00);
            }
            else
            {
                led_Color_Set(0xff, 0x00, 0x00);
            }
        }

        //获取时间
        time(&timep);
        p = gmtime(&timep);
        sprintf(date, "%d/%d     %d:%d:%d", 1 + p->tm_mon, p->tm_mday, 8 + p->tm_hour, p->tm_min, p->tm_sec);
        lcd_write(0, 1, date);
    }

    return 0;
}
