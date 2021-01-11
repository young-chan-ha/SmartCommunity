/*
 * @Description: 
 * @Author: Aster
 */

#include "relay.h"

int _relay_pin;


int relay_init(int relay_pin)
{
    _relay_pin = relay_pin;
    pinMode(_relay_pin, OUTPUT);
}

void relay_on()
{
    digitalWrite(_relay_pin, HIGH);
}

void relay_off()
{
    digitalWrite(_relay_pin, LOW);
}