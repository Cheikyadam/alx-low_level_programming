
#include <stdlib.h>

/**
 * free_grid - allocation grid
 * @width: the width of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = 0; j <= height; j++)
			free(grid[j]);
		free(grid);
	}
}
