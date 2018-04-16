#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer parameter to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
