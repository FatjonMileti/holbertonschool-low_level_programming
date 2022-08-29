#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MIN(A, B) ((A) < (B) ? (A) : (B))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bin_search(int *array, size_t size, int value, int low, int high);
int jump_search(int *array, size_t size, int value);

#endif
