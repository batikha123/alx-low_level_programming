#include "main.h"
#include <stdlib.h>
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
	unsigned int l1, l2, l, i;
	char *p;

	/* Determine the length of s1 and s2*/
	l1 = _length(s1);
	l2 = _length(s2);

	if (l2 > n)
		l2 = n;

	l = l1 + l2;

	/* Allocate memory*/
	p = malloc(sizeof(char) * lh + 1);

	if (p == NULL)
		return (NULL);

	/* Copy s1 into p*/
	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	/* Add n chars of s2 into p*/
	if (l2 == 0)
		p[i] = '\0';
	else
	{
		for (; i < lh; i++)
			p[i] = s2[i - l1];
	}

	if (l2 == n)
		p[i] = '\0';

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
