#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i  = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
