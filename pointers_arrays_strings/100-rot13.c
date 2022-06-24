#include "main.h"
/**
 * rot13 - convert string to rot13
 * @s: string
 * Return: strng
 */
char *rot13(char *s)
{
	int i, j;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a1[j] != '\0'; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				break;
			}
		}
	}
	return (s);
}