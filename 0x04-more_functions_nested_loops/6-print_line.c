#include "main.h"

/**
 * print_line- prints a line on a terminal
 * @n: is the input number
 *
 * Return: straight line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
