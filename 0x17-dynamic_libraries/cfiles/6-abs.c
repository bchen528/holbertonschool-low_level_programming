#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @n: type to be checked
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n  = n - (2 * n);
	}
	return (n);
}
