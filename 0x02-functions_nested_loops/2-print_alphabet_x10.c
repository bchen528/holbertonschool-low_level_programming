#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: 0, exit program
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
		letter = 'a';
	}
}
