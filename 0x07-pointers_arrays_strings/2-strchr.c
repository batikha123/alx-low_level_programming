#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurence of c or NULL if not exists
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
