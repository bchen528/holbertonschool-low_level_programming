#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: parameter to be checked
 * Return: 0
 */

void print_number(int n)
{
	if (n >= -9 && n <= 9)
	{
		print_single_digit(n);
	}
	else if (n >= -99 && n <= 99)
	{
		print_double_digit(n);
	}
	else if (n >= -999 && n <= 999)
	{
		print_triple_digit(n);
	}
	else if (n >= -9999 && n <= 9999)
	{
		print_four_digit(n);
	}
}

/**
 * print_single_digit - prints single digit number
 * @n: parameter to be checked
 * Return: 0
 */

void print_single_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar(n + '0');
}

/**
 * print_double_digit - prints two digit number
 * @n: parameter to be checked
 * Return: 0
 */

void print_double_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * print_triple_digit - prints triple digit number
 * @n: parameter to be checked
 * Return: 0
 */

void print_triple_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * print_four_digit - prints four digit number
 * @n: parameter to be checked
 * Return: 0
 */

void print_four_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	_putchar((n / 1000) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
