#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed into it
 * @argc: number of command line arguments, size of argv[]
 * @argv: array of size argc containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (*argv[0] != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
