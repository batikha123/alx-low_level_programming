#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '1';

	while (c <= '9')
	{
		putchar(c);

		if (c == '9')
			break;

		putchar(',');
		putchar(' ');
		c++;
	}

	putchar('\n');

	return (0);
}
