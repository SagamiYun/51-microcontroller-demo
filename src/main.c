#include <reg52.h>

#define LED_PORT P2  //将P2端口定义为LED_PORT
#define DELAY_TIME 200

void delay(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 114; j++);
    }
}

void main()
{
    unsigned char led_mask;

    while(1)
    {
        for (led_mask = 0x01; led_mask != 0; led_mask <<= 1)
        {
            LED_PORT = ~led_mask; //LED灯取反，使得对应LED灯点亮
            delay(DELAY_TIME);
        }
    }
}