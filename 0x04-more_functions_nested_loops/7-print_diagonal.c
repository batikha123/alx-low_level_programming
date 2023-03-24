#include "main.h"
/**
 * print_diagonal - print a diagonal line n times
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < i)
					_putchar(' ');

				else if (j == i)
					_putchar('\\');
				else
					continue;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
