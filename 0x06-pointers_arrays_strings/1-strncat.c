#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: string param
 * @src: string param
 * @n: number of characters
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}


