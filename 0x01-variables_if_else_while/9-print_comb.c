#include <stdio.h>

/**
 * main - the main function
 * Return: 0, exit program
 */

int main(void)
{
int a = 0;

while (a <= 9)
{
putchar('0' + a);
putchar(',');
putchar(' ');
a++;
}

putchar('\n');
return (0);
}
