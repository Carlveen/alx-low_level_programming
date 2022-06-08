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
		for (y = 0; y <= 9; y++)
		{
			num = x * y;
			if ((num / 10) == 0)
			{
				if (y == 0)
				{
					_putchar('0');
				}
				if (y != 0)
				{
					_putchar(' ');
					_putchar((num % 10) + '0');
				}
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((num / 10) + '0');
				_putchar ((num % 10) + '0');
			       if (num < 9)
			       {
			_putchar(',');
	 _putchar(' ');
			       }
			}
	 _putchar ('\n');
		}
	}	
			

