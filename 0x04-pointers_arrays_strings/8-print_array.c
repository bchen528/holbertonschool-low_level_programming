#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integer
 * @a: parameter to be checked
 * @n: parameter to be checked
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	putchar('\n');
}
