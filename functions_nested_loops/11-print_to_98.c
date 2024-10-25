#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting integer.
 *
 * Description: This function prints all natural numbers from the given
 * integer n to 98, separated by commas and spaces. If n is greater than
 * 98, it counts down to 98. If n is less than 98, it counts up to 98.
 * The last number printed is 98, followed by a new line.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
