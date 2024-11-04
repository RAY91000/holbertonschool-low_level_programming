#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
int i, j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
{
}
if (needle[j] == '\0')
return &haystack[i];
}
}
return (NULL);
}
