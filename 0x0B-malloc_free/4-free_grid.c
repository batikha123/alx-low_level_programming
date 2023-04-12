#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free a 2d array
 * @grid: the 2d array
 * @height: the array's height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
