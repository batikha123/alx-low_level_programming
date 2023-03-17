#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 0;

	while (c <= 9)
	{
		putchar(c + '0');

		if (c == 9)
			break;

		putchar(',');
		putchar(' ');
		c++;
	}

	putchar('\n');

	return (0);
}
