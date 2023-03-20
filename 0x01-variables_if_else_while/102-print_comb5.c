#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (j >= l && l != 0)
						continue;

					putchar(i + '0');
					putchar(j + '0');

					putchar(' ');
					
					putchar(k + '0');
					putchar(l + '0');
					
					if (i == k && k == l && i == 9 && j == 8)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
