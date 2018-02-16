#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		new[i] = min + i;
	return (new);
}
