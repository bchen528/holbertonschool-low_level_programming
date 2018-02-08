#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be assessed
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		len++;
		s++;
	}
	return (len);
}
