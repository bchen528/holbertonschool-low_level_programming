#include <stdio.h>

/**
 * main - the main function
 * Return: 0, exit program
 */

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
	b = a + 1;
	while (b < 10)
	{
		c = b + 1;
		while (c < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);

			if (!(a == 7 && b == 8 && c == 9))
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
