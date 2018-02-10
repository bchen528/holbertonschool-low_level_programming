#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: length of argv array
 * @argv: array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", x * y);
	}
	else
	{	
		printf("Error\n");
		return (1);
	}
	return (0);
}
