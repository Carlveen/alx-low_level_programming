#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: a string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	x = 0;

	while (s[x])
		x++;

	while (x--)
		_putchar(s[x]);
	_putchar('\n');
}
