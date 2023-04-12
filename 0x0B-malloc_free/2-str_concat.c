#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointed or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, size, size1, size2;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	size1 = _size(s1);
	size2 = _size(s2);
	size  = size1 + size2;

	p = malloc(sizeof(char) * size + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	for (; i < size; i++)
		p[i] = s2[i - size1];

	return (p);
}
/**
 * _size - return the length of a string
 * @str: the string
 * Return: length of str
 */
int _size(char *str)
{
	int s = 0;

	if (str == NULL)
		return (s);

	while (*str)
	{
		s++;
		str++;
	}

	return (s);
}
