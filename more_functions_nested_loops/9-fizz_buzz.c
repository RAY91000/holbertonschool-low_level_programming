#include <stdio.h>

/**
 * main - Affiche les nombres de 1 à 100, en remplaçant les multiples de 3 par "Fizz",
 * les multiples de 5 par "Buzz", et les multiples des deux par "FizzBuzz".
 *
 * Return: Toujours 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i < 100)
printf(" ");
}

printf("\n");
return (0);
}
