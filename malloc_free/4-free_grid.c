#include "main.h"
/**
 * free_grid - called from main
 * @grid: int
 * @height: int
 * Return: void
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
