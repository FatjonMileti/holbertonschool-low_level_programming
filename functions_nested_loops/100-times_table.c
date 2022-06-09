#include "main.h"
/**
 * print_hundred - prints ", 100"
 * Return: void
 */
void print_hundred(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar('1');
	_putchar('0');
	_putchar('0');
}

/**
 * print_comma - print ", "
 * Return: void
 */
void print_comma(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 * print_times_table - Entry point
 * @n: Print timetable until n
 * Return: void (Succesful)
 */
void print_times_table(int n)
{
	int column, row, prod, middle_digit;

	if (n >= 0 && n < 15)
	{
		for (column = 0; column <= n; column++)
		{
			for (row = 0; row <= n; row++)
			{
				prod = row * column;
				if (row == 0)
					_putchar('0');
				else if (prod < 10)
				{
					print_comma();
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					print_comma();
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod == 100)
					print_hundred();
				else if (prod > 100)
				{
					middle_digit = prod % 100;
					print_comma();
					_putchar((prod / 100) + '0');
					_putchar((middle_digit / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
