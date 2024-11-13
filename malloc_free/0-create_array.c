#include "main.h"
#include <stdlib.h>

/**
 * create_array - Cree un tableau de caractere et l'initialise
 *  avec un caractere
 * @size: Taille du tableau a creer
 * @c: Caractere d'initialisation pour chaque element du tableau
 *
 * Return: Pointeur vers le tableau, ou NULL si la creation echoue ou si size=0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
