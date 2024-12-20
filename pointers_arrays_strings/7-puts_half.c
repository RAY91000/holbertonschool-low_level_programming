#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int length = 0;
int start_index;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length / 2) + 1;
}

while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
