#include "main.h"
/**
 * _strncpy - copie a string
 * @dest: string to be coppied to
 * @src: string to copy from
 * @n: number of characters coppied
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
