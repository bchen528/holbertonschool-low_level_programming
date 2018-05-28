#include "sort.h"

/**
 * swap - swap two elements
 *
 * @array: array
 * @a: index of first element
 * @b: index of second element
 */

void swap(int *array, int a, int b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

/**
 * shell_sort - sorts an array of integers in ascending order using
 * the Shell sort algorithm
 *
 * @array: array
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
	int gap = 1;
	int temp;
	int i = 0, j = 0;
	size_t end;

	if (array == NULL || size == 0)
		return;

	while (gap < (int)size)
	{
		temp = gap;
		gap = gap * 3 + 1;
	}

	gap = temp;

	while (gap >= 1)
	{
		end = i + gap;
		while (end < size)
		{
			if (array[i] > array[i + gap])
			{
				swap(array, i, i + gap);
				j = i;
				while (j - gap >= 0)
				{
					if (array[j - gap] > array[j])
						swap(array, j - gap, j);
					else
						break;
					j--;
				}
			}
			i++;
			end = i + gap;
		}
		i = 0;
		gap = gap / 2;
		if (gap != 1)
			print_array(array, size);
	}
}
