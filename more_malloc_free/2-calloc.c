#include <stdlib.h>

/**
 * _calloc - Alloue la memoire pour un tableau de `nmemb` elements
 *           de taille `size` et initialise la memoire a zero
 * @nmemb: Nombre d'elements dans le tableau
 * @size: Taille en octets de chaque element
 *
 * Return: Pointeur vers la memoire allouee, ou NULL en cas d'echec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
