#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocate memory
 * @min: array
 * @max: intiger
 * Return: i
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	arr = malloc(sizeof(int) * l);
			if (arr == NULL)
			return (NULL);
	for (i = 0; i < l; i++)
	arr[i] = min++;
	return (arr);
}
