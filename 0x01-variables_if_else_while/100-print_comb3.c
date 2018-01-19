#include <stdio.h>

/**
 * main - the main function
 * Return: 0, exit program
 */

int main(void)
{
	int a = 0;
	int b = a + 1;
	
	while (a <= 9)
	{
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			
			if (!(a == 8 && b == 9))
			{
		putchar(',');
		putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
