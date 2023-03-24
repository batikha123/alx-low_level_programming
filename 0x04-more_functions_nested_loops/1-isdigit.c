#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Check if digit
 * @c: The number checked
 * Return: 1 (if c is a digit) 0 (if c is not a digit)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
