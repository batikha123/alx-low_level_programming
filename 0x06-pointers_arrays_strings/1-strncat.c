#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: string getting appended to by src
 * @src: string appending to dest
 * @n : number of characters of src getting appended to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, lend;

	j = 0;
	lend = strlen(dest);

	for (i = lend; i < lend + n && src[i] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}
