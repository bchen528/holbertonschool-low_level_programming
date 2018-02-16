#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of allocated space for ptr
 * @new_size: new size, in bytes, of new memory block
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old = ptr;
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new[i] = old[i];
		}
	}
	else if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new[i] = old[i];
		}
	}
	free(old);
	return (new);
}
