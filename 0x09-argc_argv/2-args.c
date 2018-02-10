#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: length of argv array
 * @argv: array containing command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
