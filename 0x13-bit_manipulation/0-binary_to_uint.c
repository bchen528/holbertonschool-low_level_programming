#include "holberton.h"

/**
 * _strlen - find length of string
 * @s: string to be assessed
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;
	return (len);
}

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary string to be assessed
 * Return: converted number, or 0 if
 * there is one or more chars in string b that is not 0 or 1
 * or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b);
	int i = len - 1;
	unsigned int count = 1;
	unsigned int sum = 0;

	while (i >= 0)
	{
		if (b[i] == 'e')
			return (0);
		if (b[i] == '1')
		{
			if (i == len - 1)
				sum = 1;
			else
				sum += count * 2;
		}
		if (i < len - 1)
			count = count * 2;
		i--;
	}
	return (sum);
}
