#include "holberton.h"

/**
 * print_last_digit - prints that last digit of a number
 * @n: type to be checked
 * Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
