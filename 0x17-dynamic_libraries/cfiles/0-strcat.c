#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
