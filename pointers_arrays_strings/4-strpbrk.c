#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Recherche dans une chaîne le premier caractère correspondant à l'un des
 * caractères spécifiés dans accept
 * @s: la chaîne dans laquelle chercher
 * @accept: la chaîne contenant les caractères à rechercher dans s
 *
 * Description: Cette fonction trouve le premier caractère de s qui correspond
 * à un des caractères présents dans accept.
 * Retourne un pointeur vers ce caractère dans s, ou NULL si aucun caractère
 * correspondant n'est trouvé.
 *
 * Return: pointeur vers le premier caractère correspondant dans s, ou NULL si aucun
 */

char *_strpbrk(char *s, char *accept)

{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
