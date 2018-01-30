#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: parameter to be checked
 */


void puts_half(char *str)
{
	int index;
	int length;

	while (str[length] != '\0')
	{
		length++;
	}
	index = length / 2;
	while (index <= 10)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
