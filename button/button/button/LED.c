/*
 * LED.c
 *
 * Created: 5/3/2024 11:08:40 AM
 *  Author: elsawah
 */ 

#include "DIO.h"
void led_init(char port ,char pin)
{
	set_pin_dir(port,pin,1);
}
void led_on(char port,char pin)
{
	DIO_write(port,pin,1);
}
void led_off(char port,char pin )
{
	DIO_write(port,pin,0);
}
void led_toggle(char port ,char pin)
{
	DIO_toggle(port,pin);
}
char LED_status(char port, char pin )
{
	return DIO_read(port ,pin);
}
