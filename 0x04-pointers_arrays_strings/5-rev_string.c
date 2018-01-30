#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: parameter to be checked
 */

void rev_string(char *s)
{
	int i, j;
	int length = 0;
	int temp;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;
	j = length;
	while (j >= i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	s[length + 1] = '\0';
}
