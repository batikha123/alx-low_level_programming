#include "main.h"
/**
 * main - print all arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 if success 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (1);

	while (*argv)
	{
		char *p = *argv;

		while (*p)
		{
			_putchar(*p);
			p++;
		}

		_putchar('\n');
		argv++;
	}

	return (0);
}
