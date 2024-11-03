#include "main.h"

/**
 * leet - Encode une chaîne en 1337 (leet speak).
 * @s: La chaîne à encoder.
 *
 * Return: Un pointeur vers la chaîne encodée.
 */

char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char replacements[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = replacements[j];
break;
}
}
}
return (s);
}
