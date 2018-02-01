#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string input
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (s);
}
