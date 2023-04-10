#include "main.h"
/**
 * main - multiplie two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if no arguments passed 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		*argv[1] -= '0';
		*argv[2] -= '0';

		putchar((*argv[1] * *argv[2]) + '0');
		_putchar('\n');
	}

	return (0);
}
