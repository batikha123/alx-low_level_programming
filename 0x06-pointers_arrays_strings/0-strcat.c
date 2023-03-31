#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to be added to
 * @src: string to be added
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, lend, len;

	j = 0;
	lend = strlen(dest);
	len = strlen(dest) + strlen(src);

	for (i = lend; i <= len; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
