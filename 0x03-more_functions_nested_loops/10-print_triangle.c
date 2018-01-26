#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: parameters to be checked
 */

void print_triangle(int size)
{
	int w, h;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= size; w++)
		{
			if (w <= (size - h))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
