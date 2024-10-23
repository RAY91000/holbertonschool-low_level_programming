#include "main.h"

/**
 * print_alphabet_x10 - Imprime 10 fois l'alphabet en minuscules,
 *                      suivi d'une nouvelle ligne à chaque fois
 *
 * Return: Rien
 */
void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
