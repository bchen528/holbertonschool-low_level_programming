#include "holberton.h"

/**
 * *_strncat - concatenates two strings using at most n byes from src and
 * src not null-terminated if contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: number bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length = 0;
	int src_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_length + i] = src[i];
	}
	if (src_length < n)
	{
		dest[dest_length + i] = '\0';
	}
	return (dest);
}
