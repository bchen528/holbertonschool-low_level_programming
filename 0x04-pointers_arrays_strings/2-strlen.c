#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: parameter to be checked
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
