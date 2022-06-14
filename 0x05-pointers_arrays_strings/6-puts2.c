#include "main.h"

/**
 * puts2 - prints every character of string
 * @str: a string param
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	str++;

	_putchar(str[i]);
	}
	_putchar('\n');
}
