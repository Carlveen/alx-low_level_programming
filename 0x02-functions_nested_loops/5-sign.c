#include "main.h"

/**
 * print_sign checks the sign of a character
 * @n is for comparison
 *
 * Return 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	int y;

	if (n < 0)
	{
	       	y = -1;
		_putchar('-');
	}
	else if (n > 0)
	{
		y = 1;
		_putchar('+');
	}
	else
	{
		y = 0;
		_putchar('0');
	}
	return (y);
}
