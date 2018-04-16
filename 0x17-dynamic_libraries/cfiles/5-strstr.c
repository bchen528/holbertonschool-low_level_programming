#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be scanned
 * @needle:  small string to be searched within haystack string
 * Return: pointer to first occurence in haystack of any of
 * the entire sequence of characters specified in needle, or a
 * null pointer if the sequence is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p;
	int count = 0;

	if (needle[j] == '\0')
		return (&haystack[i]);

	while (needle[j] != '\0' && haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			p = &haystack[i];
			count++;
		}
		else if (needle[j] != '\0')
		{
			j = 0;
			i++;
			count = 0;
		}
	}
	if (needle[j] == '\0')
	{
		return (p - count);
	}
	else if (haystack[i] == '\0')
	{
		p = 0;
		return (p);
	}
	return (0);
}
