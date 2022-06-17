#include "main.h"
/**
 * _strspn - recreate memeset
 * @s: a pointer in memory file
 * @accept: the value to be set
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i, k;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[k] == accept[i])
			{
				j++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (j);
		}
	}
	return (j);
}
