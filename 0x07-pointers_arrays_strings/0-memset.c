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
	memset(s, 'b', n);

	return (s);
}

