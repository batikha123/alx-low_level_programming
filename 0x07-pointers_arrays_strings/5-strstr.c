#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: string to locate from
 * @needle: string to locate
 * Return: pointer or NULL if not located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *h, *n;

	h = haystack;
	n = needle;

	for (i = 0; h[i] != '\0'; i++)
	{
		if (h[i] == n[0])
		{
			k = i;

			for (j = 0; n[j] != '\0'; j++)
			{
				if (h[k] == n[j])
				{
					k++;
					continue;
				}
				else
					break;
			}

			if (n[j] == '\0')
				return (h + i);
		}
	}

	return (NULL);
}
