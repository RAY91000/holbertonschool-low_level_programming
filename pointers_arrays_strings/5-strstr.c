#include "main.h"
#include <stddef.h>
/**
 * _strstr - Localise une sous-chaîne dans une chaîne
 * @haystack: la chaîne principale dans laquelle chercher
 * @needle: la sous-chaîne trouver dans haystak
 *
 * Description: Cette fonction cherche la première occrence de la sous-chaîn
 * needle dans la chaîne haystack. Les octets de fin '\0' ne sont pas compar
 * Retourne un pointeur vers le début de la sous-chaîne trouvée, ou N
 * si la sous-chaîne n'est pas trouvé
 *
 * Return: pointeur vers le début de needle dans haystack, ou NUL
 */
char *_strstr(char *haystack, char *needle)

{
int i, j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
{
}
if (needle[j] == '\0')
return &haystack[i];
}
}
return (NULL);
}
