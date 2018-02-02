#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 * @s: parameter to be checked
 * Return: encoded string
 */

char *leet(char *s)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (letter[j] != '\0')
		{
			if (s[i] == letter[j])
				s[i] = number[j];
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}
