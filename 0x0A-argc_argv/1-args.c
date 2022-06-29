#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of main arguments
 * @argv: array of arguments in main function
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
