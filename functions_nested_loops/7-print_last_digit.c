#include "main.h"
#include <limits.h> // pour INT_MIN

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
    int last_digit;

    // Handle the case for INT_MIN
    if (n == INT_MIN)
    {
        last_digit = 8; // Last digit of INT_MIN (-2147483648) is 8
        _putchar(last_digit + '0');
        return last_digit;
    }

    if (n < 0)
    {
        n = -n; // Make n positive if it's negative
    }

    last_digit = n % 10; // Get the last digit

    _putchar(last_digit + '0'); // Print the last digit as a character
    return last_digit; // Return the last digit
}
