#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in rev
 * @str: the string
 */
void print_rev(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
