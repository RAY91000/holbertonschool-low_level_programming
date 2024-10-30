#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to be converted.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *s)
{
char *original = s;

while (*s)
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
s++;
}
return (original);
}
