#include "main.h"
/**
 *_strcmp - concatenates two strings
 *
 * @s1: intiger
 * @s2: intiger
 * Return: x
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}


	return (x);
}
