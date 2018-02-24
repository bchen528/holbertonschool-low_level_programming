#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings
 * @separator: string to be orinter between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (valist == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(valist, char *));
		}
		if (i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(valist);
}
