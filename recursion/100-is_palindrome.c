#include "main.h"
/**
 * length - lenth
 * @s: string
 * Return: 0 
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}
/**
 * check - check
 * @s: string
 * @l: length
 * @i: index
 * Return: return 0
 */
int check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check(s, l, i + 1));
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: string
 * Return: 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = length(s);

	return (check(s, l, i));
}
