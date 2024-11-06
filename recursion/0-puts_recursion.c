#include "main.h"

/**
 * _puts_recursion - print une chaîne de caractè suivie d'un reur a ligne
 * @s: Pointeur vers la chaîne de caractèr a imprimer
 *
 * Description: Cette fonction utilise la récursivité pour imprimer chaque
 * caractère de la chaîne, puis ajoute un retoua la ligne après la fin
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
