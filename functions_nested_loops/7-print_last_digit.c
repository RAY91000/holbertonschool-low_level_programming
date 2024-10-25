#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');  /* Print the last digit as a character */

return (n % 10);  /* Return the last digit */
}
