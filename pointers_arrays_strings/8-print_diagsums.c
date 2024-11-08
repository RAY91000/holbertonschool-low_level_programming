#include <stdio.h>
/**
 * print_diagsums - Affiche la somme des deux diagonales d'une matrice carre
 * @a: Pointeur vers la matrice carre d'entiers
 * @size: Taille de la matrice (nombre de lignes et colonnes)
 *
 * Description: La fonction calcule la somme de la diagonale principale
 * et de la diagonale secondaire d'une matrice carre de taille specifiee.
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;

for (i = 0; i < size; i++)
{
sum1 += a[i * (size + 1)];
}
for (i = 0; i < size; i++)
{
sum2 += a[(i + 1) * (size - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
