#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum
 * @n: intiger
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list valist;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	{
		for (i = 0; i < n; i++)
			sum += va_arg(valist, int);
		return (sum);
		va_end(valist);
	}
}
