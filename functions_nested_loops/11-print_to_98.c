#include "main.h"

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
_putchar(n + '0');
if (n < 97)
{
_putchar(',');
_putchar(' ');
}
n++;
}
}
else
{
while (n > 98) {
_putchar(n + '0');
if (n > 99) {
_putchar(',');
_putchar(' ');
}
n--;
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
