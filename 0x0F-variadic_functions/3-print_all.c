#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - print char data type
 * @valist: character to be printed
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - print int data type
 * @valist: integer to be printed
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - print variable of float data type
 * @valist: float to be printed
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - print string
 * @valist: string to be printed
 */

void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;

	all_t alltypes[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	char *sep1 = "";
	char *sep2 = ", ";

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		while (alltypes[j].all != NULL)
		{
			if (*alltypes[j].all == format[i])
			{
				printf("%s", sep1);
				alltypes[j].f(valist);
				sep1 = sep2;
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	va_end(valist);
}
