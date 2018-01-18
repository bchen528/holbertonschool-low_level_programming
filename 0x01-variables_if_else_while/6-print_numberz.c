#include <stdio.h>

/**
 * main - the main function in C
 * Return: 0, exit program
 */

int main(void)
{
int c = 0;
while (c < 10)
{
putchar('0' + c);
c++;
}
putchar('\n');
return (0);
}
