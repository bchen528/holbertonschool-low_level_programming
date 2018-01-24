#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0)
		{
			sum = sum + n;
		}
		else if ((n % 5) == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}

