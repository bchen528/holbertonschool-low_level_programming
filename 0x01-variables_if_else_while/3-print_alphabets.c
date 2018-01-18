#include <stdio.h>

/**
 * main - the main function in C
 * Return: 0, exit program
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar (c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar ('\n');
return (0);
}
