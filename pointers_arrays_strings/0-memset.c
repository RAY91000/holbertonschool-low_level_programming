#include "main.h"

/**
 * _memset - Remplit zone de mémoire avec un octet constant
 * @s: pointeur vers la zone mémoire à remplir
 * @b: octet constant avec lequel remplir la mémoire
 * @n: nmbr de byte à remplir
 *
 * Cette fonction remplit les n premiers byte de la zone mémoire
 * pointée par s avec la valeur de l'octet b.
 *
 * Return: Un pointeur vers la zone mémoire remplie s)
 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
