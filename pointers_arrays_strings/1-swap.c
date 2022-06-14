#include "main.h"
/**
 *swap_int - updates to 98
 *@a:takes an integer
 *@b:takes an integer
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
