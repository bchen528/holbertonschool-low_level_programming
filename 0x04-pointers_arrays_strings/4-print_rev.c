#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter to be checked
 */

void print_rev(char *s)
{
	int index;
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	index = length;
	while (s[index] >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
