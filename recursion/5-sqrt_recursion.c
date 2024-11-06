#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle de n
 * @n: Le nombre dont on veut la racine carrée
 *
 * Return: La racine carrée naturelle de n, ou - a pas racine carr� naturel
 */
int _sqrt_recursion(int n)

{
	static int i = 1;

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	i++;
	return (_sqrt_recursion(n));
}
