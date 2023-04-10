#include "main.h"
/**
 * main - print the name of the program
 * @argv: array of arguments
 * @argc: number of arguments passed
 * Return: 0 if success else 1
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (1);

	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}

	_putchar('\n');

	return (0);
}
