#include "main.h"
/**
 *print_number - check is digit
 *@n:integer
 *
 *Return: 1 if c is uppercase, 0 otherwise
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
	{
		x = n;
	}
	if (x / 10)
{
	print_number(x / 10);
}
	_putchar((x % 10) + '0');
}

