#include "main.h"
#include <ctype.h>
/**
 * leet - encode a string into 1337
 * @c: the string
 * Return: c
 */
char *leet(char *c)
{
	int i, j, target;

	char *l = "aeotl";
	char *n = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			target = tolower(c[i]);

			if (target == l[j])
				c[i] = n[j];
		}
	}

	return (c);
}
