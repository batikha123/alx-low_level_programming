#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string
 *@accept: segemnt
 *Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, k;
	char *p;

	p = accept;
	c = 0;

	for (i = 0; p[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (p[i] == s[j])
			{
				k = j;
				while (s[k + 1] == p[i])
				{
					c++;
					k++;
				}
				c++;
				break;
			}
	return (c);
}
