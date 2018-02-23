#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - calculates sum of all parameters
 * @n: integer
 * Return: sum of all its parameters, otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list valist;
	int sum = 0;
	int i;

	va_start(valist, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
