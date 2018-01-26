#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: parameters to be checked
 */

void print_triangle(int size)
{
	int i, numHash;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (numHash = 0; numHash < i; numHash--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	if (size >= 0)
		_putchar('\n');
}
