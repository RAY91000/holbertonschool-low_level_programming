#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Cree un tableau a deux dimensions d'entiers initialise a 0
 * @width: La largeur du tableau
 * @height: La hauteur du tableau
 *
 * Return: Pointeur vers le tableau a deux dimensions ou NULL en cas d'echec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
