#include "main.h"
/**
 * _strlen_recursion - count the length of a string
 *@s: the string
 *Return: the length of s
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == '\0')
		return (c);
	else
		return (c +  _strlen_recursion(s + 1) + 1);
}
