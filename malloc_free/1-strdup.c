#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars.
 * @str: size of the array.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *dstr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		j++;

	dstr = malloc(sizeof(char) * i);
	if (dstr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dstr[i] = str[i];

return (dstr);
}
