#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array to be assessed
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element for which
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
