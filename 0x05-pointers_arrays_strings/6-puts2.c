#include "main.h"
#include <string.h>
/**
 * puts2 - print every other char of a string
 * @str: the string
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		 i = i + 2;
	}
	_putchar('\n');
}
