#include "main.h"

/**
 * times_table- prints 9 times table
 *
 */
void times_table(void)
{
	int x;
	int y;
	int num;

	for (x = 0; x <= 9; x++)
	{
		num = x;
		for (y = 0; y <= 9; y++)
		{
			if (y < 9)
			{
				_putchar((num * y) + '0');
				_putchar(',');
				_putchar(' ');
			}


		}
		_putchar('\n');
	}
}
			

