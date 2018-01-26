#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: parameter to be checked
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			if (n == i)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('_');
			}
		}
	}
}
