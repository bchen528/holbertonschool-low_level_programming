#ifndef __SEARCH__
#define __SEARCH__
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t start, size_t end);

#endif /*__SEARCH__*/
