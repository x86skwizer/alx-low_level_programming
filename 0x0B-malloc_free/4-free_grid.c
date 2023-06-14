#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2 dimensional array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;
	i = 0;
	while (i < height)
		free(grid[i++]);
	free(grid);
}
