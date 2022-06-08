#include "main.h"

/**
 * print_sign - checks the sign of a character
 * @n: the character to be checked
 *
 * Return: 0, -1 or 1
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
