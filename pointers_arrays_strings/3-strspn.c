#include "main.h"
/**
 *_strspn - function
 *@s: char
 *@accept: char
 *Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				j++;
				break;
			}
		}
	}
	if (accept[k + 1] == 0)
		return (j);
	return (j);
}
