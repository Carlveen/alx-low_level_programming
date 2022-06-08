#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 * @n: a number to start from
 *
 * Return: Always 0.
 */
void print_to_98(int n)

{
	while (n <= 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n >= 98)
	{
		printf("%i, ", n);
		n--;
	}
	putchar('\n');
}


