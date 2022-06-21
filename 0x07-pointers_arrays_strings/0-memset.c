#include "main.h"
#include "string.h"

/**
 * _memset - fills the first bytes of the memory
 * @s: the memory pointer
 * @b: to replace the bytes in mem
 * @n: size
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}

