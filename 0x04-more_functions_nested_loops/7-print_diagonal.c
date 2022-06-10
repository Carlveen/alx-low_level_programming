#include "main.h"

/**
 * print_diagonal - prints a diagonal on terminal
 * @n: the length of the diagonal
 *
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
		_putchar('\n');
	for (k = 0; k < n; k++)
	{
		for (j = 0; j < k; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
