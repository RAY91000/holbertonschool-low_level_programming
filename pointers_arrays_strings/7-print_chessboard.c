#include "main.h"
#include <stdio.h>
/**
 * _strspn - Calcule la longueur du prefixe d'une chaine composee
 *           uniquement de certains caracteres
 * @s: La chaine principale a analyser
 * @accept: La chaine contenant les caracteres acceptables
 *
 * Return: Le nombre de caracteres dans le segment initial de s
 * qui sont presents dans accept
 */

void print_chessboard(char (*a)[8])

{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
