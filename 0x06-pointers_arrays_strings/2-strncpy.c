#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string to another
 * @dest: a string parameter
 * @src: a string parameter
 * @n: number of characters to be copied
 *
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
}
