#include "main.h"

/**
 * print alphabet - prints a to z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}

