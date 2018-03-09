#include "holberton.h"

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: decimal number
 * @index: index starting from 0 of bit you want to set
 * Return: 1 if worked, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
/* shift left index times*/
	if (n == NULL)
		return (-1);
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
