#include "main.h"
#include <stdio.h>
/**
 *print_array - updates to 98
 *@a:takes an integer
 *@n:takes an integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
