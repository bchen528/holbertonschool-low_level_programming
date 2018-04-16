#include "holberton.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be assessed
 * @c: character in string s
 * Return: pointer to first occurence of character c in string s,
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p, *j;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		else
		{
			i++;
		}
	}
	if (c == '\0')
	{
		j = &s[i];
		return (j);
	}
	return (0);
}
