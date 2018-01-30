#include "holberton.h"

/**
 * *_strcpy - copes string pointed to by src to buffer pointed to by dest
 * @dest: parameter to be checked
 * @src: parameter to be checked
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
