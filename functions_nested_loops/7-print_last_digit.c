#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to process
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
    {
        n = -n;  // Convert to positive if negative
    }
    last_digit = n % 10;

    _putchar(last_digit + '0');  // Print the last digit
    return (last_digit);
}
