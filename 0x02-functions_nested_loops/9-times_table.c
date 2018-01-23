#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int rows, columns;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			n = a * b;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
	}
}
