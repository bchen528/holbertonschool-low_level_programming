#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: parameter to be checked
 */

void rev_string(char *s)
{
	int index;
	int length = 0;
	char rev[9];
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	index = length;
	while (index >= 0)
	{
		rev[length - index] = s[index];
		index--;
	}
	while (i < 9)
	{
		s[i] = rev[i];
		i++;
	}
	s[i] = '\0';
}
