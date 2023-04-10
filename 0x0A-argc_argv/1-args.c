#include "main.h"
/**
 * main - print the number of arguments passed
 * @argc: number of arguments passed
 * @argv: array containing the arguments
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int c = 0;

	while (*argv || argc > 0)
	{
		c++;
		argv++;
		argc--;
	}

	_putchar((c - 1) + '0');
	_putchar('\n');

	return (0);
}
