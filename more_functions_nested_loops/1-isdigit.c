#include "main.h"
/**
 *_isdigit - check is digit
 *@c:integer
 *
 *Return: 1 if c is uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
