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

	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= 48 && *argv[i] <= 57) && *argv[0] != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else if (*argv[0] == '\0')
		{
			printf("%d\n", 0);
		}
		else
		{
			pos_sum += atoi(argv[i]);
		}
	}
	printf("%d\n", pos_sum);
	return (0);
}
