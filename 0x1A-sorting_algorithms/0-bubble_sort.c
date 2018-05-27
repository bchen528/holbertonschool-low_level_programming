#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm, print the array after
 * each time you swap two elements
 *
 * @array: array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t first_size = size;
	size_t i = 0;
	int temp;

	if (array == NULL || size == 0)
		return;

	while (i < size)
	{
		while (i < size)
		{
			if (i + 1 == size)
				break;
			else if (i + 1 <= size && array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, first_size);
			}
			i++;
		}
		i = 0;
		size--;
	}
}
