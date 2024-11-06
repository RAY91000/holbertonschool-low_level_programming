#include "main.h"

/**
 * _strlen_recursion - Renvoie la longueur d'une chaîne de caractè
 * @s: Pointeur vers la chaîne de caractè
 *
 * Return: Longueur de la chaîne de caractèr
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
