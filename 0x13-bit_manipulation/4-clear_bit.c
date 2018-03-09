#include "holberton.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: decimal number to be assessed
 * @index: index starting from 0 of bit you want to set
 * Return: 1 if it worked, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = 0;
	mask = 1 << index;

	*n = *n & (~mask);
	return (1);
}
