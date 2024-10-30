#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;

while (*dest)
{
dest++;
}

while (n-- && *src)
{
*dest++ = *src++;
}

*dest = '\0';

return dest_start;
}
