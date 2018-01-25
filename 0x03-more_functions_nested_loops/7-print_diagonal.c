#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: parameter to be checked
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, numSpace;

       	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (numSpace = 0; numSpace < i; numSpace++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n >= 0)
		_putchar('\n');
}
