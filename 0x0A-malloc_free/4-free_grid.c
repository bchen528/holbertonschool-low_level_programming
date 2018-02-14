#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2D grid previously created by alloc_grid
 * @grid: 2D grid from alloc_grid
 * @height: height of 2D grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
