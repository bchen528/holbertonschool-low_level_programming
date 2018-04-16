#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer type to be checked
 * Return: 0, exit program
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
