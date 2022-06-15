#include "main.h"
/**
 *puts_half - updates to 98
 *@str:takes an integer
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	for (i = i / 2; str[i] != '\0'; i++)
	{
	_putchar (str[i]);
	}
	_putchar('\n');
}
