/*
 * arrays.c
 *
 *  Created on: May 16, 2021
 *      Author: dejan
 */


#include "arrays.h"

#define iner "ITERATIVE"
#define form "FORMULA"


int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{
	int16_t vrednost = 0;

	vrednost = first_element + (n - 1) * difference;

	return vrednost;

}

int16_t Sum(int16_t first_element, int16_t difference, int16_t n,int8_t mode)
{
	int16_t suma = 0;
	if(mode == iner)
	{
		for(int8_t i = 0; i < n; i++)
		{
			suma = suma + Element (first_element, difference, i);
		}
	}
	else
	{
		suma = (n * (first_element + Element (first_element, difference, n))) / 2;
	}

	return suma;
}

