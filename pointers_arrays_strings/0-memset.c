#include "main.h"
/**
 *_memset - function
 *@s: char
 *@b: char
 *@n: intiger
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
