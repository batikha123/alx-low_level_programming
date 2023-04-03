#include "main.h"
/**
 * _memset - fill memory with a constent byte
 * @s: starting address of memory to be filled
 * @b: Value to be filled
 * @n: number of bytes to be filled in the memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
