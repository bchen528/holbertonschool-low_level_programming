#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _strlenCon(int ac, char **av);

/**
 * _strlenCon - find string length
 * @ac: number of command-line arguments
 * @av: command-line argument
 * Return: string length
 */

int _strlenCon(int ac, char **av)
{
	int i, j;
	int len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	return (len);
}

/**
 * *argstostr - concatenate all arguments of your program
 * @ac: number of command-line arguments
 * @av: array containing command-line arguments
 * Return: pointer to a new string if success, NULL if fail
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int count = 0;
	int length = 0;
	char *conarray;

	if (ac == 0 || av == NULL)
		return (NULL);
/*calculate total length of all command-line arguments*/
	length = _strlenCon(ac, av);
/*make new array containing all commandline arguments + #newlines + \0*/
	conarray = malloc(sizeof(char) * (length + ac + 1));
	if (conarray == NULL)
		return (NULL);
/*assign new array with characters from arguments*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			conarray[count] = av[i][j];
			count++;
		}
		conarray[count] = '\n';
		count++;
	}
	conarray[count] = '\0';
/*return array pointer*/
	return (conarray);
}
