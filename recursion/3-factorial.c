#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre donné
 * @n: Le nombre pour lequel on souhaite calculer le factoriel
 *
 * Return: Le factoriel de n, ou -1 si n est inférieu a 0 (erreur)
 */
int factorial(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return 1;
	return (n * factorial(n - 1));
}

