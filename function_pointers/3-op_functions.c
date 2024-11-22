#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Calcule la somme de deux entiers
 * @a: Premier entier
 * @b: Deuxième entie
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calcule la différence de deux entier
 * @a: Premier entier
 * @b: Deuxième entie
 * Return: La différence entre a e b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calcule le produit de deux entiers
 * @a: Premier entier
 * @b: Deuxième entie
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calcule la division entière de deux entier
 * @a: Dividend
 * @b: Diviseur
 * Return: Le résultat de a divisé par
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calcule le reste de la division entière de deux entier
 * @a: Dividend
 * @b: Diviseur
 * Return: Le reste de a divis� �par b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
