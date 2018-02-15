#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: number of bytes of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = (char *)malloc(nmemb * size);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < nmemb ; i++)
	{
		*((char *)new + i) = 0;
	}
	*((char *)new + i) = '\0';
	return (new);
}
