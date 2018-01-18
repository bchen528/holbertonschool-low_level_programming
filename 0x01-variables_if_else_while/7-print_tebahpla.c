#include <stdio.h>

/**
 * main - the main function
 * Return: 0; exit program
 */

int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
