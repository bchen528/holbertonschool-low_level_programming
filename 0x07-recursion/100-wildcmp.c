#include "holberton.h"

/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2 (can contain *)
 * Return: 1 if strings identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
