#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int r, c, p;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			p = r * c;
			if (c == 0)
			{
				_putchar('0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}


