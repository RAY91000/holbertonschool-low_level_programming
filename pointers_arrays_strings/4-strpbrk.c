#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Recherche dans une chaîne le premier caractère correspoant
 * caractères spécifiés dans acc
 * @s: la chaîne dans laquelle cherche
 * @accept: la chaîne contenant les caractère rechercher da
 *
 * Description: Cette fonction trouve le premier caractère de s qui correspon
 *  un des caractères présents da
 * Retourne un pointeur vers ce caractère dans s, ou NULL si aucun caract�e
 * correspondant n'est trouvé
 *
 * Return: pointeur vers le premier caractère correspondant dans s, ou NUL
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
