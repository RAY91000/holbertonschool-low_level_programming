#include "main.h"

/**
 * jack_bauer - Affiche chaque minute de la journée de Jack Bauer
 *
 * Return: Rien
 */
void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            /* Afficher l'heure et les minutes */
            _putchar(hour / 10 + '0');
            _putchar(hour % 10 + '0');
            _putchar(':');
            _putchar(minute / 10 + '0');
            _putchar(minute % 10 + '0');
            _putchar('\n');
        }
    }
}
