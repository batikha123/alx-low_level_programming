#include "main.h"
#include <string.h>
/**
 * rot13 - encode a string using rot13
 * @c: the string
 * Return: c
 */
char *rot13(char *c)
{
	int i, j, len;

	char *s1 = "ABCDEFGHIJKLMabcdefghijklm";
	char *s2 = "NOPQRSTUVWXYZnopqrstuvwxyz";

	len = strlen(s1);

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (c[i] == s1[j])
				c[i] += 13;
			else if (c[i] == s2[j])
				c[i] += -13;
		}
	}

	return (c);
}
