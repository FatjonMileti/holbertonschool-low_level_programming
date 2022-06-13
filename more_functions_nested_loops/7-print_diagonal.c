#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: to check
 * Return:  0 or 1.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i < 1)
		_putchar('\n');
}
