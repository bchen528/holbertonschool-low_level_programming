#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime factor of number 612852475143
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long result;
	long m;

	result = (sqrt(n) / 10) + 1;
	for (m = result; m > 1; m--)
	{
		if (n % m == 0)
		{
			n = n / m;
			printf("%ld", n);
		}
	}
	putchar('\n');
	return (0);
}
