#include "holberton.h"
#include <stdio.h>

/**
 * main - print program name
 * @argc: length of argv, number of command line arguments
 * @argv: array of of length argc containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
