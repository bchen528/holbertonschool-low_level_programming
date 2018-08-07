#ifndef __SEARCH__
#define __SEARCH__
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
int jump_linear_search(int *array, size_t start, size_t size,
		       size_t jump_size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int exp_binary_search(int *array, size_t start, size_t end, int value);
int find_min(int a, int b);
#endif /*__SEARCH__*/
