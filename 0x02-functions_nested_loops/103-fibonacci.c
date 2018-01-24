#include "holberton.h"
#include <stdio.h>

/**
 * main - prints even Fibonacci numbers up to 4000000, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long previousNum = 1;
	long currentNum = 2;
	long nextNum = 0;
	long sum = 2;

	while (nextNum <= 4000000)
	{
		nextNum = previousNum + currentNum;
		if ((nextNum % 2) == 0)
		{
			sum = sum + nextNum;
		}
		previousNum = currentNum;
		currentNum = nextNum;
	}
	printf("%ld\n", sum);
	return (0);
}
