/*
 * button.c
 *
 * Created: 5/6/2024 3:43:33 PM
 *  Author: elsawah
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 8000000UL      don't use delay 
#include "button.h"
#include "LED.h"
int main(void)
{
	button_init('D',0);
	led_init('D',1);
    while(1)
    {
        if(button_read('D',0)==1)
		{
			led_toggle('D',1);	
				_delay_ms(2000);
			
		}	
			_delay_ms(1000);	
		/*
		else{
			led_off('D',1);	
		}
		*/			
    }

}