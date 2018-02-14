#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: the columns
 * @height: the rows
 * Return: pointer to 2D array of integers, NULL for
 * failure or when width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	*grid = malloc(sizeof(int *) * (width * height));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
}
