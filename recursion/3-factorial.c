#include "main.h"

/**
 * factorial - prints a string, followed by a new line.
 * @n: intiger
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return ('\n');
}
