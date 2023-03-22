#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print from number to 98
 * @n: The staring point number
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, \n", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, \n", i);
		}
	}
}
