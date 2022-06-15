#include "main.h"
/**
 *puts2 - updates to 98
 *@str:takes an integer
 */
void puts2(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
{
	if (i % 2 == 0)
{
	_putchar (str[i]);
}
	i++;
}
}
