#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i >= j)
				continue;

			for (k = 0; k <= 9; k++)
			{
				if (j >= k)
					continue;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
