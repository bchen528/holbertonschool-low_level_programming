#include "holberton.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string to be assessed
 * @accept: second string containing list of characters to match in string s
 * Return: number of bytes in initial segment of s,
 * which consit only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	int count = 0;
	int temp = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		if (count != 0 && count > temp)
		{
			j = 0;
			i++;
			temp = count;
		}
		else
		{
			break;
		}
	}
	return (count);
}
