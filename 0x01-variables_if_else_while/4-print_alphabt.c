#include <stdio.h>

/**
 * main - the main function
 * Return: 0, exit program
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar (c);
}
}
putchar ('\n');
return (0);
}
