#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size using '#' characters
 * @size: The size of the triangle to print
 */
void print_triangle(int size)
{
int row, space, hash;

if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (space = 0; space < size - row; space++)
{
_putchar(' ');
}
for (hash = 0; hash < row; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}