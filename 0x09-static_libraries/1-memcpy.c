#include "main.h"
/**
 * _memcpy - copy adress
 * @dest: content  to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
