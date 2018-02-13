#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return pointer to newly allocated space
 * in memory containing a copy of a string
 * @str: string to be copied
 * Return: pointer to newly allocated space in memory
 * contianing duplicate string
 */

char *_strdup(char *str)
{
	int i;
	char *dup;
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(sizeof(char) * size);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}
