#include "holberton.h"

/**
 * print_alphabet - print alphabet in lowercase
 * Return: 0, exit program
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
