#include "main.h"

/**
 * print_square - check the code.
 * @size: intiger
 * Return:  Always 0.
 */
void print_square(int size)
{
	int r, c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
