#include "3-calc.h"

/**
 * op_add - Calcule la somme de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Calcule la différence de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 * Return: La différence entre a et b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Calcule le produit de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Calcule la division entière de deux entiers
 * @a: Dividend
 * @b: Diviseur
 * Return: Le résultat de a divisé par b
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Calcule le reste de la division entière de deux entiers
 * @a: Dividend
 * @b: Diviseur
 * Return: Le reste de a divisé par b
 */
int op_mod(int a, int b)
{
    return (a % b);
}
