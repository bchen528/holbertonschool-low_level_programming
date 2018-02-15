#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory using malloc
 * @b: size of array for allocated memory
 * Return: pointer to allocated memory if success,
 * normal process termination with status value 98
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
	{
		exit(98);
	}
	return (new);
}
