#include "3-calc.h"
#include <stdio.h>
/**
 * main - check the code
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	f  = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = f(a, b);

	printf("%d\n", result);

	return (0);
}
