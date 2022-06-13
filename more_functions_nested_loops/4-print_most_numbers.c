#include "main.h"
/**
 *print_most_numbers - check is digit
 *
 *
 *Return: 1 if c is uppercase, 0 otherwise
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '9')
			_putchar(i);
	}
	_putchar('\n');
}
