#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[i]);
		for (coin = 0; change > 0; coin++)
		{
			if (change >= 25)
				change = change - 25;
			if (change >= 10)
				change = change - 10;
			if (change >= 5)
				change = change - 5;
			if (change >= 2)
				change = change - 2;
			if (change >= 1)
				change = change - 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
