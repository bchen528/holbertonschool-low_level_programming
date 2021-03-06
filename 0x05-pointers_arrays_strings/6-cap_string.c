#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
		if (s[i] != '\0')
		{
			while (s[i] >= 97 && s[i] <= 122)
				i++;
			while (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
			       || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
			       || s[i] == '{' || s[i] == '}' || s[i] == '\n'
			       || s[i] == '\t' || s[i] == ' ')
			{
				i++;
			}
		}
		else
		{
			return (s);
		}
	}
	return (s);
}
