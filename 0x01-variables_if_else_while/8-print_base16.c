#include <stdio.h>

/**
 * main - the main function
 * Return: 0, exit program
 */

int main(void)
{
	char c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		c++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
