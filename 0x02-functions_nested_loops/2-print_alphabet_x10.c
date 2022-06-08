#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphhabets 10 times
 *
 * Return: Always 0 
 */
void print_alphabet(void)
{
	char y;

	int j;

	for (j=0; j<10; j++)
	{


          	for (y = 'a'; y<= 'z'; y++)
		{
			_putcahr(y);
		}
		_putcahr('\n);
	}

	
