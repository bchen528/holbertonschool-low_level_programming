#include "holberton.h"
#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long previousNum = 1;
	long currentNum = 2;
	long nextNum;
	int counter = 0;

	printf("%ld, ", previousNum);
	printf("%ld, ", currentNum);

	while (counter <= 95)
	{
		nextNum = previousNum + currentNum;
		printf("%ld", nextNum);
		if (counter != 95)
		{
			printf(", ");
		}
		previousNum = currentNum;
		currentNum = nextNum;
		counter++;
	}
	putchar('\n');
	return (0);
}
