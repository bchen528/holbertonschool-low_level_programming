#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
       
	int s1_length, s2_length = 0;

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}
	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}
	if (s1_length < s2_length)
	{
		return ((s1[0] - s2[0]) - '0');
	}
	else if (s1_length == s2_length)
	{
		return ('0');
	}
	else if (s1_length > s2_length)
	{
		return ((s1[0] - s2[0]) - '0');
	}
	else
	{
		return (0);
	}
}
