#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est premier
 * @n: Le nombre à vérifier
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
    if (n <= 1)  /* Les nombres <= 1 ne sont pas premiers */
        return (0);

    return (check_prime(n, 2));  /* Appel à la fonction récursive de vérification */
}

/**
 * check_prime - Fonction récursive pour vérifier la primalité
 * @n: Le nombre à vérifier
 * @i: Le diviseur potentiel
 *
 * Return: 1 si n est premier, 0 sinon
 */
int check_prime(int n, int i)
{
    if (i * i > n)  /* Si i^2 > n, cela signifie que n n'a pas de diviseur inférieur à sqrt(n) */
        return (1);

    if (n % i == 0)  /* Si n est divisible par i, ce n'est pas un nombre premier */
        return (0);

    return (check_prime(n, i + 1));  /* Vérifie avec le prochain diviseur possible */
}

