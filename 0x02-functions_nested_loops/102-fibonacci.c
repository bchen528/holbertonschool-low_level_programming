#include "holberton.h"
#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int previousNum = 1;
	int currentNum = 2;
	int nextNum;
	int counter = 0;

	printf("%d, ", previousNum);
	printf("%d, ", currentNum);

	while (counter <= 50)
	{
		nextNum = previousNum + currentNum;
		printf("%d", nextNum);
		if (counter != 50)
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
