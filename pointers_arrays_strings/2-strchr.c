#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne de caractères
 * @s: La chaîne de caractèrea analyser
 * @c: Le caractèr a rechercher dans la chaîne
 *
 * Return: Un pointeur vers la première occurrence du caractère c dans s,
 * ou NULL si le caractère n'est pas trouvé
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
