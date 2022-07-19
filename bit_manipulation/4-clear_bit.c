#include "main.h"
/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = (sizeof(*n) * 8);

	if (index > s)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
