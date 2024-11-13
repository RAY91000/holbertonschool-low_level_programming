#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Alloue de la memoire en utilisant malloc
 * @b: Taille de la memoire a allouer en octets
 *
 * Return: Un pointeur vers la memoire allouee
 * Termine le processus avec un statut de 98 si malloc echoue
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
