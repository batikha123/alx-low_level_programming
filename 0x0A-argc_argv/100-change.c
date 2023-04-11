#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the min number of coins to make change
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: (1) if argc != 2 (0) if success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coin = 0;
		long change;

		argv = argv + 1;
		change = strtol(*argv, NULL, 10);

		if (change < 0)
			printf("0\n");
		else
		{
			int result;

			result = min_coins(change, coin);
			printf("%d\n", result);
		}
	}

	return (0);
}
/**
 * min_coins - return min coins to make change
 * @a: change to be made
 * @b: number of coins
 * Return: b
 */
int min_coins(int a, int b)
{
	while (a > 0)
	{
		if (a >= 25)
		{
			a -= 25;
			b++;
		}
		else if (a >= 10)
		{
			a -= 10;
			b++;
		}
		else if (a >= 5)
		{
			a -= 5;
			b++;
		}
		else if (a >= 2)
		{
			a -= 2;
			b++;
		}
		else
		{
			a -= 1;
			b++;
		}
	}

	return (b);
}
