#include "main.h"

/**
 * print_numbers- prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char k;

	while (k < 10)
	{
		_putchar(k + '0');

		k++;
	}
	_putchar('\n');
}
