#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocation grid
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: an double array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **tab;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
