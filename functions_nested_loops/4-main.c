#include "main.h"

/**
 * main - Test la fonction _islower
 *
 * Return: Toujours 0
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0);
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');

    return (0);
