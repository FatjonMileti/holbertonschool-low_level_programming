#include "main.h"
#include <stdlib.h>

/**
 * free_grid - creates an array of chars.
 * @grid: size of the array.
 * @height: storaged char
 * Return: pointer of an array of chars
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
