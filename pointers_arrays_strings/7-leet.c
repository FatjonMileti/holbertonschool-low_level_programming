#include "main.h"
/**
 * leet - concatenate two strings
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int j[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int p1, p2;

	for (p2 = 0; s[p2] != '\0'; p2++)
	{
		for (p1 = 0; i[p1] != '\0'; p1++)
		{
			if (s[p2] == i[p1])
				s[p2] = j[p1];
		}
	}
	return (s);
}
