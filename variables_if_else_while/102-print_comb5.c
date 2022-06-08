#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int I;

	for (i = 0; i <= 98; i++)
	{
		for (I = i + 1; I <= 99; I++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((I / 10) + '0');
			putchar((I % 10) + '0');
			if (i == 98)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
