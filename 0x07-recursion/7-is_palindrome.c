#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to be assessed
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palin - check if string is a palindrome
 * @s: string to be assessed
 * @start: first index
 * @end: end index
 * Return: 1 if palindrome, 0 if not palindrome
 */

int check_palin(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);
	return (check_palin(s, start + 1, end - 1));
}

/**
 * is_palindrome - determine if string is a palindrome
 * @s: string to be assessed
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int end;

	if (*s == '\0')
		return (1);
	end = _strlen_recursion(s) - 1;
	return (check_palin(s, 0, end));
}
