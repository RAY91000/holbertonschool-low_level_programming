#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int ld = n % 10;

    if (ld < 0)
        ld = -ld;

    _putchar(ld + '0');
    return (ld); /* Return the last digit */
}
