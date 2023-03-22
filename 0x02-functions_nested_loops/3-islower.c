#include "main.h"
#include <ctype.h>
/**
 *  _islower - Checks if char is lowercase
 * @c: char to be checked
 *
 * Return: 1 (if c is lowercase) 0 if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
