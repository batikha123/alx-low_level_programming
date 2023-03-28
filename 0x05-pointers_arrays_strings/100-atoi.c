#include "main.h"
#include <ctype.h>
/**
 * _atoi - convert a string into an integer
 * @s: the string to convert
 * Return: an integer
 */
int _atoi(char *s)
{
	int i, d, c;
	unsigned int num;

	num = 0;
	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isdigit(s[i]))
		{
			d = s[i] - '0';
			num = num * 10 + d;

			if (isdigit(s[i + 1]) == 0)
				break;
		}
		else if (s[i] == '-')
			c++;
		else
			continue;
	}

	if (c % 2 != 0)
		num *= -1;

	return (num);
}
