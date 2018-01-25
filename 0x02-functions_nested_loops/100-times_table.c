#include "holberton.h"

/**
 * print_three_space - print one comma and three spaces
 */

void print_three_space(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_two_space - print one comma and two spaces
 */

void print_two_space(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_one_space - print one comma and one space
 */

void print_one_space(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
 * print_times_table - prints n times table
 * @n: determine which times table
 * Return: 0
 */

void print_times_table(int n)
{
	int row, column;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row < (n + 1); row++)
	{
		for (column = 0; column < (n + 1); column++)
		{
			if (((row * column) / 10) == 0)
			{
				if (column != 0)
				{
					print_three_space();
				}
				_putchar(((row * column) % 10) + '0');
			}
			else if (((row * column) / 100) == 0)
			{
				if (column != 0)
				{
					print_two_space();
				}
				_putchar(((row * column) / 10) + '0');
				_putchar(((row * column) % 10) + '0');
			}
			else if (((row * column) / 100) >= 1)
			{
				if (column != 0)
				{
					print_one_space();
				}
				_putchar(((row * column) / 100) + '0');
				_putchar((((row * column) / 10) % 10) + '0');
				_putchar(((row * column) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
