#include "main.h"

/**
 * _pow_recursion - prints a string, followed by a new line.
 * @x: intiger
 * @y: intiger
 * Return: n
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
