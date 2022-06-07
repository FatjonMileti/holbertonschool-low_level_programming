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



/* print lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	/* print uppercase letters */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar ('\n');
	return (0);
}
