#include "sort.h"

/**
 * print_helper - print output
 *
 * @array: array
 * @start: starting index
 * @end: size of interval
 */
void print_helper(int *array, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i != end - 1)
			printf(", ");
	}
	putchar('\n');
}


/**
 * copy_array - copy elements of array to subarray
 *
 * @array: original array
 * @start: starting index
 * @end: size
 * @copy: working array
 * Return: duplicate array
 */
void copy_array(int *array, int start, int end, int *copy)
{
	int i;

	for (i = start; i < end; i++)
		copy[i] = array[i];
}


/**
 * merge - merge together sorted and right arrays
 *
 * @array: unsorted array
 * @start: starting index
 * @middle: mid point
 * @end: size
 * @copy: working array
 * Return: final sorted array
 */
void merge(int *array, int start, int middle, int end, int *copy)
{
	int i, j, k;

	i = start;
	j = middle;
	k = start;

	while (k < end)
	{
		if (i < middle && (j >= end || array[i] <= array[j]))
		{
			copy[k] = array[i];
			i++;
		}
		else
		{
			copy[k] = array[j];
			j++;
		}
		k++;
	}

}


/**
 * split_merge - split array, merge final array
 *
 * @copy: working array
 * @start: starting index
 * @end: size
 * @array: array
 */
void split_merge(int *copy, int start, int end, int *array)
{
	int middle;

	/*already sorted*/
	if (end - start < 2)
		return;

	middle = (start + end) / 2;

	split_merge(array, start, middle, copy);
	split_merge(array, middle, end, copy);
	printf("Merging...\n");
	printf("[left]: ");
	print_helper(copy, start, middle);
	printf("[right]: ");
	print_helper(copy, middle, end);

	merge(copy, start, middle, end, array);

	printf("[Done]: ");
	print_helper(array, start, end);
}


/**
 * merge_sort - sorts an array of integers in ascending order using the
 * Merge sort algorithm
 *
 * @array: array
 * @size: size of array
 * Return: intermediate sorted array
 */
void merge_sort(int *array, size_t size)
{
	int *copy;

	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return;

	copy_array(array, 0, size, copy); /*copy contents of array into copy*/
	split_merge(copy, 0, size, array); /*sort copy into original array*/
	free(copy);
}
