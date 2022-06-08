#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphhabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int j;
	char y;

	for (j = 0; j < 10; j++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
	}
	_putchar('\n');
}
}

