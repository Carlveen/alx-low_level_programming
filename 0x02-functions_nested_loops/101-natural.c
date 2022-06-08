#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0.
 */
int main(void)

{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
