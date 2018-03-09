#include "holberton.h"

/**
 * print_binary - prints binary representation of number
 * @n: decimal number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int mask;
	int first_one = 0;

	if (n == NULL)
		return;
/*create mask*/
	mask = 0;
	mask = ~mask;
	mask = mask >> 1;
	mask = ~(mask);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (first_one == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			first_one = 1;
		}
		mask = mask >> 1;
	}
}
