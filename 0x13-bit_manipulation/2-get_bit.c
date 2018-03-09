#include "holberton.h"

/**
 * get_bit - finds value of bit at a given index
 * @n: decimal number to be assessed
 * @index: index starting from 0 of bit you want to get
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (((n >> index) & 1) == 1 || ((n >> index) & 1) == 0)
	{
		bitval = n >> index & 1;
		return (bitval);
	}
	return (-1);
}
