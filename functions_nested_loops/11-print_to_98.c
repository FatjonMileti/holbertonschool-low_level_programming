#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: int
 * Return - void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%i, ", i);
		}
		else
		{
			printf("%i\n", i);
		}
	}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}

