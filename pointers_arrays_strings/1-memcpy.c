#include "main.h"

/**
 * _memcpy - Copie une zone de mémoire
 * @dest: pointeur la destination où les data seront copié
 * @src: pointeur vers la source des données à copier
 * @n: nombre de bytes à copier de src vers dest
 *
 * Cette fonction copie n bytes de la zone mémoire pointée par src
 * dans la zone mémoire pointée par dest.
 *
 * Return: Un pointeur vers la zone mémoire de destination (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
