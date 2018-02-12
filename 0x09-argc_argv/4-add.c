#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: length of argv array
 * @argv: array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int pos_sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (!(*argv[i] >= 48 && *argv[i] <= 57))
			{
				printf("Error\n");
				return (1);
			}
			pos_sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", pos_sum);
	}
	return (0);
}
