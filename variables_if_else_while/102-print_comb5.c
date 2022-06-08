#include <stdio.h>

/**
 *main
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int t;
	int o;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (t = i; t <= '9'; t++)
			{
				for (o = j + 1; o <= '9'; o++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((i == '9' && j == '8') && (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
