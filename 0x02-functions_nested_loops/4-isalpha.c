#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: for comparison purposes
 *
 * Return: 1 if c is an alphabet and 0 if not
 */
int _isalpha(int c)
{
	if (c > 97 && c < 122)
	{
		if (c > 65 && c < 90)
		{
			return (1);
		}
	}

		else
		{
			return (0);
		}
	
}
