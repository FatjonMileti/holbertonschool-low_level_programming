#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -- entry point
 * prints the size of various types on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int N;
	int M;

	for (M = '0'; M <= '9'; M++)
	{
		for (N = (M + 1); N <= '9'; N++)
		{
			for (n = (N + 1); n <= '9'; n++)
			{
				putchar(M);
				putchar(N);
				putchar(n);

				if (M != '7' || N != '8' || n != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
