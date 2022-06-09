#include<stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, s;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			s = s + n;
		}
	}
	printf("%i\n", s);
	return (0);
}
