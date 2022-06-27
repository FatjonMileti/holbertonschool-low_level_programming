#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - allocate memory
 * @s1: string
 * @s2: string
 * @n: intiger
 * Return: i
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n <= len2)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2) + 1);
			if (str == NULL)
			return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i  + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
