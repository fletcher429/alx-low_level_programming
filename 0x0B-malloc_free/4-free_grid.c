#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2d
 * @grid: pointer
 * @height: column
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
