#include <stdio.h>

/**
 * main - the main function
 * Return: 0; exit program
 */

int main(void)
{
int a, b = 0;
while (a <= 9)
{
while (b <= 9)
{
putchar('0' + a);
putchar('0' + b);
if (!(a == 9 && b == 9))
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
b = 0;
}
putchar('\n');
return (0);
}
