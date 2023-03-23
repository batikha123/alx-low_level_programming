#include "main.h"
/**
 * print_times_table - Print the the time table of number
 * @n: The number
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((i * j) + '0');
					if (j == n)
						continue;
					_putchar(',');
				}
				else if ((i * j) > 9 && (i * j) <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) %  100) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
					if (j == n)
						continue;
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
