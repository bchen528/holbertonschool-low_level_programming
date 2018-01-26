#include "holberton.h"

/**
 * print_square - prints a square
 * @size: parameter to be checked
 * Return: 0
 */

void print_square(int size)
{
	int w, h;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}
