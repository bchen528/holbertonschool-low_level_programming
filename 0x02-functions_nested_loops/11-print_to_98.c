#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point number
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
