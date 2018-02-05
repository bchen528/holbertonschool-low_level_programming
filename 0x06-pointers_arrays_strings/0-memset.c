#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: points to memory area
 * @b: constant byte
 * @n: first n bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
