#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive integers passed as arguments
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 if success 1 if argument is not a digit
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
	{
		long sum = 0;

		argv = argv + 1;

		while (*argv)
		{
			char *p;

			p = *argv;

			while (*p)
			{
				if (!isdigit(*p))
				{
					printf("Error\n");
					return (1);
				}
				p++;
			}
			sum += strtol(*argv, NULL, 10);
			argv++;
		}
		printf("%ld\n", sum);
	}

	return (0);
}
