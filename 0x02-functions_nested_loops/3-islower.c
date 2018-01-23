#include "holberton.h"

/**
 * int _islower - checks for lowercase character
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
