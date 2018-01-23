#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: takes in a integer value to be checked
 * Return: 0, exit program
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
