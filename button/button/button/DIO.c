/*
 * DIO.c
 *
 * Created: 4/30/2024 2:34:49 PM
 *  Author: elsawah
 */ 
#include<avr/io.h>
#include "std_macros.h"
void set_pin_dir(char port ,char pin,char dir)
{
	switch(port)
	{	
		case 'a':
		case 'A':
		if(dir==1)
		{
			SET_BIT(DDRA,pin);
		}
		else
		{
			CLR_BIT(DDRA,pin);
		}
       break;

		case 'b':
		case 'B':
		if(dir==1)
		{
			SET_BIT(DDRB,pin);
		}
		else
		{
			CLR_BIT(DDRB,pin);
		}
		break;

	   case 'C':
	   case 'c':
	   if(dir==1)
	   {
		   SET_BIT(DDRC,pin);
	   }
	   else
	   {
		   CLR_BIT(DDRC,pin);
	   }
	   break;

      case 'd':
      case 'D':
      if(dir==1)
      {
	      SET_BIT(DDRD,pin);
      }
      else
      {
	      CLR_BIT(DDRD,pin);
      }
      break;
	}
}

void DIO_write(char port,char pin ,char val)
{
	switch(port)
	{
		case 'a':
		case 'A':
		if(val==1)
		{
			SET_BIT(PORTA,pin);
		}
		else
		{
			CLR_BIT(PORTA,pin);
		}
		break;

		case 'b':
		case 'B':
		if(val==1)
		{
			SET_BIT(PORTB,pin);
		}
		else
		{
			CLR_BIT(PORTB,pin);
		}
		break;

		case 'C':
		case 'c':
		if(val==1)
		{
			SET_BIT(PORTC,pin);
		}
		else
		{
			CLR_BIT(PORTC,pin);
		}
		break;

		case 'd':
		case 'D':
		if(val==1)
		{
			SET_BIT(PORTD,pin);
		}
		else
		{
			CLR_BIT(PORTD,pin);
		}
		break;
	}
}

void DIO_toggle(char port,char pin)
{
	  switch(port)
	  {
		  case 'a':
		  case 'A':
			  TOG_BIT(PORTA,pin);
		  break;

		  case 'b':
		  case 'B':
		     TOG_BIT(PORTB,pin);
		  break;

		  case 'C':
		  case 'c':
		    TOG_BIT(PORTC,pin);
		  break;

		  case 'd':
		  case 'D':
		    TOG_BIT(PORTD,pin);
		  break;
	  }

}

char DIO_read(char port,char pin)
{
	char x;
	switch(port)
	{
		case 'a':
		case 'A':
			x=READ_BIT(PINA,pin);
		break;

		case 'b':
		case 'B':
			x=READ_BIT(PINB,pin);
		break;

		case 'C':
		case 'c':
			x=READ_BIT(PINC,pin);	
		break;

		case 'd':
		case 'D':
			x=READ_BIT(PIND,pin);
		break;
	}
return x;
}
void dio_connet_pullup(char port,char pin, char connect)
{
	DIO_write(port,pin,connect);
}