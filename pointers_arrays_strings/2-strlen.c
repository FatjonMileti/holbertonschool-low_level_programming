#include "main.h"
/**
 *_strlen - updates to 98
 * @s: place the string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
}
