#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints all the pieces of a chessboard
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])

{
int i = 0;
int j;

while (i < 0)
{
j = 0;
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
i++;
}
}
