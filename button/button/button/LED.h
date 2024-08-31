/*
 * LED.h
 *
 * Created: 5/3/2024 11:08:56 AM
 *  Author: elsawah
 */ 


#ifndef LED_H_
#define LED_H_

void led_init(char port ,char pin);
void led_on(char port,char pin);
void led_off(char port,char pin );
void led_toggle(char port ,char pin);
char LED_status(char port, char pin );



#endif /* LED_H_ */