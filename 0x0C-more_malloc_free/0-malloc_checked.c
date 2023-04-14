#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: integer
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
