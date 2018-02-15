#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlenNew - find string length
 * @s: string to be assessed
 * Return: length of string
 */

int _strlenNew(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to newly allocated space in memory,
 * containing s1 followed by first n bytes of s2 and \0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlenNew(s1);
	len2 = _strlenNew(s2);
	if (n >= len2)
		new = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			new[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			new[i] = s2[j];
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
