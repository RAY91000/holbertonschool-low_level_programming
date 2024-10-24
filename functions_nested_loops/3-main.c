#include "main.h"
#include <stdio.h>

/**
 * main - Test la fonction _islower
 *
 * Return: Toujours 0
 */
int main(void)
{
    char ch = 'a';
    int result;

    result = _islower(ch);
    printf("%c est en minuscule: %d\n", ch, result);

    ch = 'Z';
    result = _islower(ch);
    printf("%c est en minuscule: %d\n", ch, result);

    return (0);
}
