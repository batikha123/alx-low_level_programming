#include "main.h"
/**
 * main - print all arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 if success 1 if not
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > 0)
	{
		while(*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		
		_putchar('\n');

		i++;
		argc--;
	}

	return (0);
}
