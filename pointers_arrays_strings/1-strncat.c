#include "main.h"
/**
 *_strncat - concatenates two strings
 *
 * @dest: intiger
 * @src: intiger
 * @n: intiger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
		while (src[j] < src[n])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	return (dest);
}
