#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplie two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if no arguments passed 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;
		long mul;

		a = strtol(argv[1], NULL, 10);
		b = strtol(argv[2], NULL, 10);

		mul = a * b;

		printf("%ld\n", mul);
	}

	return (0);
}
