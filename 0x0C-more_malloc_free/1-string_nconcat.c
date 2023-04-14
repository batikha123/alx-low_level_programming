#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int _length(char *str);

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: nomber of bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, length, i;
	char *p;

	/* Determine the length of s1 and s2*/
	length1 = _length(s1);
	length2 = _length(s2);

	if (length2 > n)
		length2 = n;

	length = length1 + length2;

	/* Allocate memory*/
	p = malloc(sizeof(char) * length + 1);

	if (p == NULL)
		return (NULL);

	/* Copy s1 into p*/
	for (i = 0; i < length1; i++)
		p[i] = s1[i];
	/* Add n chars of s2 into p*/
	if (s2 == NULL)
		p[i] = '\n';
	else
	{
		for (; i <= length; i++)
			p[i] = s2[i - length1];
	}

	if (length2 == n)
		p[i] = '\n';
	return (p);
}
/**
 * _length - return the length of a string
 * @str: the str
 * Return: integer
 */
int _length(char *str)
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
