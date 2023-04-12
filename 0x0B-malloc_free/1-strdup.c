#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a pointer to a newly coppied string
 * @str: the string to copy
 * Return: pointer or NULL if failed to allocate
 */
char *_strdup(char *str)
{
	int i, size;
	char *p;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	p = malloc(sizeof(*str) * size + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
