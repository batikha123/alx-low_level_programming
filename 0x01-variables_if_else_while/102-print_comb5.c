#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i >= j)
				continue;

			putchar((i/10) + '0');
			putchar((i%10) + '0');

			putchar(' ');
					
			putchar((j/10) + '0');
			putchar((j%10) + '0');

			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
