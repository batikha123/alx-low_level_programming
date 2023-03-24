#include "main.h"
/**
 * print_line - draw a straing ligne
 * @n: the length of the ligne
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
