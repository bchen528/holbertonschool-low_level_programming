#include "holberton.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination array
 * @src: source array
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
