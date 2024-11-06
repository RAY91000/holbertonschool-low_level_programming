#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaîne de caractè a l'envers
 * @s: Pointeur vers la chaîne de caractèresa imprimer
 *
 * Description: Cette fonction utilise la récursivité pour atteindre la f
 * de la chaîne puis imprime chaque caractère au retour de la pile d'appels
 * produisant ainsi un affichage inversé.
 */
void _print_rev_recursion(char *s)

{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
