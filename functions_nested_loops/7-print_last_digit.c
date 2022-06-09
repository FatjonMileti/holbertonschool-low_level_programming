#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: The character to print
 *
 * Return: On success m.
 */

int print_last_digit(int n)
{

	int m = n % 10;

	if (m < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
