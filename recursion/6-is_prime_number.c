#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est premie
 * @n: Le nombre verfi�
 *
 * Return: 1 si le nombre est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Fonction récursive pour vérifier la primali
 * @n: Le nombre à vérifi
 * @i: Le diviseur potentiel
 *
 * Return: 1 si n est premier, 0 sinon
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}

