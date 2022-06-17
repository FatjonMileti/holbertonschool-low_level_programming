#include "main.h"
/**
 * _strpbrk - recreate memeset
 * @s: a pointer in memory file
 * @accept: the value to be set
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int k;

	for ( ; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return ('\0');
}
