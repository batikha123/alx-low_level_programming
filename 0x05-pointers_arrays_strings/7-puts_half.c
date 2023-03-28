#include "main.h"
#include <string.h>
/**
 * puts_half - print second half a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, len, start;

	len = strlen(str);
	start = (len - 1) / 2;

	for (i = start + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
