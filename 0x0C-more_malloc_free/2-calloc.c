#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements of the array
 * @size: size of nmemb
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
