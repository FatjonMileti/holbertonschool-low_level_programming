#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * @void: no argument
 **/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
