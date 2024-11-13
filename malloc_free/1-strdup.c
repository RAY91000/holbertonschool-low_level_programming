#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Cree une copie d'une chaine dans un nouvel espace memoire
 * @str: La chaine de caracteres a dupliquer
 *
 * Return: Pointeur vers la chaine dupliquee, ou NULL si echec d'allocation
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
