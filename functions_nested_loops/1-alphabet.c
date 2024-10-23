#include "main.h"

/**
 * print_alphabet - Imprime l'alphabet en minuscules suivi d'une nouvelle ligne
 *
 * Return: Rien
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
