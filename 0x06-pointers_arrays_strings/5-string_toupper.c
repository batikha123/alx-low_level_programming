#include "main.h"
#include <ctype.h>
/**
 * string_toupper - change lowercase to uppercase of a string
 * @c: the string
 * Return: c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		c[i] = toupper(c[i]);

	return (c);
}
