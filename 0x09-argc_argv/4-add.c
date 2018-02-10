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
	int i = 1;
	int pos_sum = 0;

	for (; i < argc; i++)
	{
		if (*argv[0] == '\0')
		{
			printf("%d\n", 0);
		}
		else if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			pos_sum += atoi(argv[i]);
		}
	}
	printf("%d\n", pos_sum);
	return (0);
}
