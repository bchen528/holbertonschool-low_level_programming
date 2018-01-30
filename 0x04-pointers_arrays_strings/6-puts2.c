#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: parameter to be checked
 */

void puts2(char *str)
{
	int index = 0;

	while (index < 10)
	{	
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
