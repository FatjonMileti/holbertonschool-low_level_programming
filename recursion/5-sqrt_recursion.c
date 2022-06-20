#include "main.h"

/**
 * find_root - prints a string, followed by a new line.
 * @n: intiger
 * @root: intiger
 * Return: n
 */
int find_root(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (find_root(n, root + 1));
}
/**
 * _sqrt_recursion - prints a string, followed by a new line.
 * @n: intiger
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else
		return (find_root(n, 1));
}
