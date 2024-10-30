#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *s)
{
    int i = 0;

    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;

    while (s[i])
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
            s[i] == ',' || s[i] == ';' || s[i] == '.' ||
            s[i] == '!' || s[i] == '?' || s[i] == '"' ||
            s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            i++;

            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
        else
        {
            i++;
        }
    }
    return (s);
}
