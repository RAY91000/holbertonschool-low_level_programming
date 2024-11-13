#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatène s1 avec les n premiers caractères de s2
 * @s1: Première chaîne de caractères
 * @s2: Deuxième chaîne de caractères
 * @n: Nombre de caractères de s2a concaténe
 *
 * Return: Un pointeur vers la chaîne concaténée, ou NULL si l'allocation échoue
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len_concat, i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	len_concat = len1 + n;

	concat_str = malloc(len_concat + 1);
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
