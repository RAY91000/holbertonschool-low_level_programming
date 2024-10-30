#include "main.h"

/**
 * _strcat - Concatène la chaîne src à la chaîne dest.
 * @dest: La chaîne de destination à laquelle on ajoute.
 * @src: La chaîne source à ajouter.
 *
 * Return: Un pointeur vers la chaîne resultante dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
