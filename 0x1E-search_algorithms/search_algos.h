#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stddef.h>

#define MIN(a,b) ((a) > (b)) ? (a) : (b)

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
