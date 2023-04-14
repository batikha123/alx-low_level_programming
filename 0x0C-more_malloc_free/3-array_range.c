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
	int i, c, *p;

	if (min > max)
		return (NULL);

	/* Determine the number of elements*/
	i = min;
	c = 1;

	while (i <= max)
	{
		c++;
		i++;
	}

	p = malloc(sizeof(int) * c);

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= c; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);

}
