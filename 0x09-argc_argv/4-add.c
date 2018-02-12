#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_args - check if string for numbers and non numbers
 * @argv: the string to be analyzed
 * Return: 1 if number, 0 if non-number
 */

int check_args(argv[i])
{
	int i = 0;

	while (argv[i] != '\0')
	{
		if (!(argv[i] >= 48 && argv[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: length of argv array
 * @argv: array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int pos_sum = 0;

	while (i < argc)
	{
		if (check_args(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		pos_sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", pos_sum);
	return (0);
}
