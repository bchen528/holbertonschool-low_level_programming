#include "holberton.h"

/**
 * find_sqrt - calculate squareroot of a number
 * @n: square
 * @x: square root
 * Return: squareroot of n
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 1));
}
