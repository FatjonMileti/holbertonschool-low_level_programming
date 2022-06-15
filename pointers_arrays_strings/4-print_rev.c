#include "main.h"
/**
 *print_rev - updates to 98
 *@s:takes an integer
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		c = i - 1;
		while (c >= 0)
		{
			_putchar(s[c]);
				c--;
		}
		_putchar('\n');
}
