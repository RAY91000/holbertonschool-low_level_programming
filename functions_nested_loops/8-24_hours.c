#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day
 *
 * Return: void
 */
void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar((hour / 10) + '0');  // Tens place of hour
            _putchar((hour % 10) + '0');  // Units place of hour
            _putchar(':');                 // Colon separator
            _putchar((minute / 10) + '0'); // Tens place of minute
            _putchar((minute % 10) + '0'); // Units place of minute
            _putchar('\n');                // New line
        }
    }
}
