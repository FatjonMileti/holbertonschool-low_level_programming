#include "main.h"
/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, s = (sizeof(n) * 8);

	if (index > s)
		return (-1);
	if (n > 0)
	{
		num = (n >> index) & 1;
		return (num);
	}
	else
		return (-1);
}
