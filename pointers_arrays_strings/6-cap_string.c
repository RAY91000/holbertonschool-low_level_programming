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

    // Capitalize the first character if it's a lowercase letter
    if (s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;

    while (s[i])
    {
        // Check for word separators
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
            s[i] == ',' || s[i] == ';' || s[i] == '.' ||
            s[i] == '!' || s[i] == '?' || s[i] == '"' ||
            s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            // Move to the next character
            i++;

            // Capitalize the next character if it's a lowercase letter
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
