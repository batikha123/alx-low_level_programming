#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string
 *@accept: segemnt
 *Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, c;

	c = 0;

	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (accept[i] == s[j])
			{
				k = j;
				while (s[k + 1] == accept[i])
				{
					c++;
					k++;
				}
				c++;
				break;
			}
	return (c);
}
