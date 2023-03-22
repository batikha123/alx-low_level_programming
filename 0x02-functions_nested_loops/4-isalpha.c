#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks if char is an alphabet
 * @c: the char to be checked
 *
 * Return: 1 (if c is an alphabet) 0 if else
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
