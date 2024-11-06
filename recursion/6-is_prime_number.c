#include "main.h"

/**
 * is_prime_number - Vérifie si un nombre est premier
 * @n: Le nombre à tester
 *
 * Return: 1 si n est un nombre premier, sinon 0
 */
int is_prime_number(int n)

{
	int i;

	if (n <= 1)
		return (0);

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
