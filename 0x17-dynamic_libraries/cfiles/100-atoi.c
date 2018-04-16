#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: parameter to be checked
 * Return: 0
 */

int _atoi(char *s)
{
	int length;
	int i = 0;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}
	j = length;
	while (i < length)
	{
		if (j >= 48 && j <= 57)
		{
			_putchar(s[i]);
		}
		i++;
	}
	return (0);
}
