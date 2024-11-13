#include <stdlib.h>

/**
 * array_range - Cree un tableau d'entiers allant de min a max
 * @min: La valeur minimale (incluse)
 * @max: La valeur maximale (incluse)
 *
 * Return: Pointeur vers le tableau cree, ou NULL si echec
 */
int *array_range(int min, int max)
{
	int *array;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	array = malloc(range * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
		array[i] = min + i;

	return (array);
}
