#include "main.h"
/**
 * alloc_grid - entry point
 * @width: arr
 * @height: arr
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);

}
