#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @str: parameter to be checked
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
