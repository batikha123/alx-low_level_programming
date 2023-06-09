#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width < 1 || height < 1)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (!p[i])
		{
			for (i = 0; i < height; i++)
				free(p[i]);
			free(p);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
