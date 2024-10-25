#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n; /* Make n positive if it's negative */
	}

	last_digit = n % 10; /* Get the last digit */

	_putchar(last_digit + '0'); /* Print the last digit as a character */
	return (last_digit); /* Return the last digit */
}
