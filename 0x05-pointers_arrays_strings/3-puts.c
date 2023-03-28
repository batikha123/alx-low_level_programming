#include "main.h"
#include <string.h>
/**
 * _puts - print a string + \n
 * @str: the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
