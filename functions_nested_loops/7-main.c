#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    _putchar('\n'); // Optional: print a newline after the first call
    r = print_last_digit(0);
    _putchar('\n'); // Optional: print a newline after the second call
    r = print_last_digit(-1024);
    _putchar('\n'); // Optional: print a newline after the third call
    return (0);
}
