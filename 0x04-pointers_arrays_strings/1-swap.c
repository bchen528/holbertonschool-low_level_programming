#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: parameters to be checked
 * @b: parameter to be checked
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
