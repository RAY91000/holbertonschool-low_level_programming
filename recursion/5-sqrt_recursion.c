#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carr√©e naturelle de n
 * @n: Le nombre dont on veut la racine carr√©e
 *
 * Return: La racine carr√ nature de n, ou -1 si n a pas de racine carr√ nature
 */
int _sqrt_recursion(int n)

{
	int i = 0;

	if (n < 0)
		return (-1);

	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}

	return (-1);
}
