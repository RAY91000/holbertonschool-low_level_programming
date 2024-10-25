#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);  /* This should print 8 */
    _putchar('\n');            /* Move to the next line */
    r = print_last_digit(0);   /* This should print 0 */
    _putchar('\n');            /* Move to the next line */
    r = print_last_digit(-1024); /* This should print 4 */
    _putchar('\n');            /* Move to the next line */
    
    return (0);
}
