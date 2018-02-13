#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of char, initialized with specific char
 * @size: size of array
 * @c: specific char to initialize
 * Return: pointer to array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
