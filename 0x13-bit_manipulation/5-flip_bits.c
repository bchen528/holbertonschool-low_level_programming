#include "holberton.h"

/**
 * flip_bits - find number of bits you need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you need to flip to get
 * from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int newNum;
	unsigned long int mask;
	int count = 0;

	mask = 0;
	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;

	while (mask > 0)
	{
		newNum = n ^ m;
		if (newNum & mask)
			count++;
		mask = mask >> 1;
	}
	return (count);
}
