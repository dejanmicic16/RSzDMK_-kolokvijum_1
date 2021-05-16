/**
* @file main.c
* @brief Aplikacija koja bi trebala da radi sa aritmrtickim nizovima
* @author Dejan Micic
* @date 16-05-2021
* @version 1.0
*/


#include <avr/pgmspace.h>
#include <stdio.h>
#include <avr/io.h>
#include "usart.h"
#include "arrays.h"
#include "../Tajmer/tajmer0.h"
#include "../Pinovi/Pinovi.h"


int main()
{
	usartInit(9600);
	int16_t first_element;
	int16_t difference;
	int16_t n;
	int8_t mode;

	while(1)
	{
		usartPutString_P(PSTR("\r \n"));
		usartPutString_P(PSTR("Unesite prvi element: "));
		while(!usartAvailable());
		timer0DelayMs(100);
		first_element = usartParseInt();

		usartPutString_P(PSTR("\r \n"));
		usartPutString_P(PSTR("Unesite broj clanova koji trazis: "));
		while(!usartAvailable());
		timer0DelayMs(100);
		n = usartParseInt();

		usartPutString_P(PSTR("\r \n"));
		usartPutString_P(PSTR("uneti razliku dva susenda clana: "));
		while(!usartAvailable());
		timer0DelayMs(100);
		difference = usartParseInt();

		usartPutString_P(PSTR("\r \n"));
		usartPutString_P(PSTR("uneti mode za sume: "));
		while(!usartAvailable());
		timer0DelayMs(100);
		usartPutString(mode);




	}
	return 0;
}
