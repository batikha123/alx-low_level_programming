#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointed or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, size, size1;
	char *p;

	size1 = strlen(s1);
	size = size1 + strlen(s2);

	p = malloc(sizeof(char) * size + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		p[i] = s1[i];

	for (; i < size; i++)
		p[i] = s2[i - size1];

	return (p);
}
