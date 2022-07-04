#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @n: intiger
 * @separator: separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list valist;

	va_start(valist, n);
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(valist, int);
			printf("%d", num);
			if (i < n - 1 && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(valist);
	}
}
