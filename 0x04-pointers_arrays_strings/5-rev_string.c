#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: parameter to be checked
 */

void rev_string(char *s)
{
	int index;
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	char rev[length];

	length--;
	index = length;
	while (index >= 0)
	{
		rev[length - index] = s[index];
		index--;
	}
	++length;
	while (i < length)
	{
		s[i] = rev[i];
		i++;
	}
	s[i] = '\0';
}
