#include "main.h"
/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		count = count + (result & 1);
		result >>= 1;
	}
	return (count);
}
