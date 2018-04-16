#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to be assessed
 * @accept: string containing characters to match
 * Return: pointer to byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *p;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		j = 0;
		i++;
	}
	p = 0;
	return (p);
}
