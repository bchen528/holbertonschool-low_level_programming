#include "holberton.h"

/**
 * *rot13 - encode string using rot13
 * @s: string to be converted into rot13
 * Return: converted rot13 string
 */

char *rot13(char *s)
{
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] =    "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j = 0;
	
	while (s[i] != '\0')
	{
		while (letter[j] != '\0')
		{
			if (s[i] == letter[j])
			{
				s[i] = rot[j];
			}
			j++;
		}
		i++;
		j=0;
	}
	return (s);
}
