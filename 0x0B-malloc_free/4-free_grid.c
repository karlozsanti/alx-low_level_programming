#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[i]);
	}

	free(grid);
}
