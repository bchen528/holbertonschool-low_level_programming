#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: parameter to be checked
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{		
			_putchar('\n');
		}
		else
		{
			_putchar('_');	
		}
	}
	if (n != 0)
		_putchar('\n');
}
