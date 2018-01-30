#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: parameter to be checked
 */

void puts_half(char *str)
{
	int index;
	int length_of_the_string;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		index = (length_of_the_string - 1) / 2;
	}
	else
	{
		index = length_of_the_string / 2;
	}
	while (index <= 10)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
