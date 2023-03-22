#include "main.h"
/**
 * times_table - Print the 9's time table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');

				if (j == 9)
					continue;

				_putchar(',');
			}

			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}

				_putchar((i * j) + '0');

				if (j == 9)
					continue;

				_putchar(',');
			}
		}


		_putchar('\n');
	}
}
