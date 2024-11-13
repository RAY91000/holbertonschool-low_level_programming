#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libere la memoire allouee pour un tableau a deux dimensions
 * @grid: Pointeur vers le tableau a deux dimensions
 * @height: La hauteur du tableau
 *
 * Return: Rien
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
