#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;

	b = 2;

	for (c = 1; c <= 50; c++)
	{
		if (a ! = 20365011074)
		{
			printf("%ld, ", a);
		}
		else
		{
			printf("%ld\n", a);
		}
		d = a + b;
		a = b;
		b = d;
	}
	return (0);
}
