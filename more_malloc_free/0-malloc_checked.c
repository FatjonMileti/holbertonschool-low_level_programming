#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: int b
 * Return: i
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
