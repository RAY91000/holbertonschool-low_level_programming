#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
count++;
break;
}
}
if (!found)
break;
}
return (count);
}
