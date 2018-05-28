#include "sort.h"

/**
 * swap - swap two elements
 *
 * @array: array
 * @a: index of first element
 * @b: index of second element
 * @size: size of array
 */

void swap(int *array, int a, int b, size_t size)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
	if (array[a] != array[b])
		print_array(array, size);
}

/**
 * wall - use a partition to sort integers in ascending order
 *
 * @array: array
 * @start: first element
 * @end: last element
 * @size: size of array
 * Return: index of partition
 */

size_t wall(int *array, int start, int end, size_t size)
{
	int pivot, wall_idx, i;

	pivot = array[end];
	wall_idx = start;
	i = start;

	while (i < end)
	{
		if (array[i] <= pivot)
		{
			swap(array, i, wall_idx, size);
			wall_idx++;
		}
		i++;
	}
	swap(array, wall_idx, end, size);
	return (wall_idx);
}

/**
 * qs_helper - helps sorts an array of integers in ascending order using the
 * Quick sort algorithm
 *
 * @array: array
 * @start: index of first element
 * @end: index of last element
 * @size: size of array
 */

void qs_helper(int *array, int start, int end, size_t size)
{
	int w;

	if (start < end)
	{
		w = wall(array, start, end, size);
		qs_helper(array, start, w - 1, size);
		qs_helper(array, w + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm
 *
 * @array: array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	qs_helper(array, 0, size - 1, size);
}
