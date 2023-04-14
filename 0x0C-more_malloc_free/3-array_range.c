#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int i, l, *p;

	if (min > max)
		return (NULL);

	/* Determine the number of elements*/
	l = max - min + 1;
	p = malloc(sizeof(int) * l);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		p[i] = i + min;

	return (p);

}
