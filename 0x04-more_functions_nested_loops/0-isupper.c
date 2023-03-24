#include "main.h"
#include <ctype.h>
/**
 * _isupper - Check for uppercase charcters
 * @c: character
 * Return: 1 (c is a char) 0 (c is not a char)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
