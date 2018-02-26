#ifndef YOGURT
#define YOGURT
#include <stdarg.h>

/**
 * struct all - structure for all data types
 * @all: character representing datatype
 * @f: printf function for specific datatype
 *
 * Description: struct all contains characters that
 * represent datatypes and function pointers that
 * point to a printf function for corresponding data type
 */

typedef struct all
{
	char *all;
	void (*f)(va_list valist);
} all_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /*YOGURT*/
