#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list valist;
		unsigned int i;

		va_start(valist, n);

		if (separator == NULL)
			printf("%s", "");

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		putchar('\n');
		va_end(valist);
	}
}
