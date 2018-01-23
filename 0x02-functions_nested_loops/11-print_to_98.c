#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point number
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n++;
	}
	while (n > 97)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n--;
	}
	putchar('\n');
}
