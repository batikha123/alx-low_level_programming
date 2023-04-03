#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory area to copy into
 * @src: memory area to copy from
 * @n: number of bytes getting coppied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
