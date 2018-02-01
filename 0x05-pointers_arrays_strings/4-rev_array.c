#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of bytes
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j, temp;

	n--;
	j = n;
	while (i <= j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
