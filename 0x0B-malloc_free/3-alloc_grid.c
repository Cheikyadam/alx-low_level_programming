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
	tab = malloc(sizeof(int **) * width);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		tab[i] = malloc(sizeof(int) * height);
		if (tab[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	return (tab);
}
