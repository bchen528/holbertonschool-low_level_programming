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
	int s1_length = 0;

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	while (i < s1_length)
	{
		if (s1[i] < s2[i])
		{
			return (s1[0] - s2[0]);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] > s2[i])
		{
			return (s1[0] - s2[0]);
		}
		i++;
	}
	return (s1[0] - s2[0]);
}
