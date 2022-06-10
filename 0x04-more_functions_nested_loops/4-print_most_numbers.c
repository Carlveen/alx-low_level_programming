#include "main"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char j;

	while (j < 10)
	{
		if ((j != 2) && (j != 4))
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
