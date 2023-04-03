#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurence of c or NULL if not exists
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
