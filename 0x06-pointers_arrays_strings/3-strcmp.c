#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, c;

	c = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			c = s1[i] - s2[i];
			break;
		}
	}

	return (c);
}
