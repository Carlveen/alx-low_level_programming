#include "main.h"

/**
 * sqrt_evaluation - returns natural sqrt of a number
 *
 * @n: a number parameter
 * @a: iterator
 *
 * Return: sqrt
 */

int sqrt_evaluation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
		{
			return (a);
		}
			else

				return (-1);
		}
		return (0 + sqrt_evaluation(n, a + 1));
	}
	/**
	 * _sqrt_recursion - returns the natural square root of a number
	 *  @n: input number
	 *  Return: natural square root
	 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt_evaluation(n, 2));
}

