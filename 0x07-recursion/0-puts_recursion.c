#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be assessed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	if (*s)
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
