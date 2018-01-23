#include "holberton.h"

/**
 * times_table - prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			if ((((row * column) / 10)) == 0)
			{
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(((row * column) % 10) + '0');
			}
			else
			{
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(((row * column) / 10) + '0');
				_putchar(((row * column) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
