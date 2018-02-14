#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find string length
 * @s: string to be assessed
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated two strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *constr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s1) + _strlen(s2) + 1;
	constr = (char *)malloc(sizeof(char) * size);
	if (constr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		constr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		constr[i] = s2[j];
		i++;
		j++;
	}
	constr[i] = '\0';
	return (constr);
}
