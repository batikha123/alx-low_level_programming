#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array o and initializes it with a specific char
 * @size: size of the array
 * @c: the specific char
 * Return: NULL if not allocated or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);


}
