#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: nomber of bytes of s2
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1, length, i;
	char *p, *s11;

	length1 = 0;
	s11 = s1;

	/* Determine the length of s1*/
	if (s1 == NULL)
		length1 = 0;
	else
	{
		while (*s11)
		{
			length1++;
			s11++;
		}
	}

	length = length1 + n + 1;

	/* Allocate memory*/
	p = malloc(sizeof(*p) * length);

	if (p == NULL)
		return (NULL);

	/* Copy s1 into p*/
	for (i = 0; i < length1; i++)
		p[i] = s1[i];
	/* Add n chars of s2 into p*/
	if (s2 != NULL)
	{
		for (; i < length; i++)
			p[i] = s2[i - length1];
	}
		return (p);
}
