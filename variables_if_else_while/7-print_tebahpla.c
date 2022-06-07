#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar (ch);
	putchar ('\n');
	return (0);
}
