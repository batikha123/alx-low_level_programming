#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalize all words of string
 * @c: the string
 * Return: c
 */
char *cap_string(char *c)
{
	int i, j, len;
	char *S = " \n\t,;.!?\"(){}";

	len = strlen(S);

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (i == 0 || S[j] == c[i - 1])
			{
				c[i] = toupper(c[i]);
				continue;
			}
		}
	}

	return (c);
}
