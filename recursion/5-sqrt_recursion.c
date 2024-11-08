#include "main.h"

/**
 * square - Calcule la racine carree d'un nombre par recherche recursive
 * @num: Le nombre dont on cherche la racine carree
 * @root: Le candidat actuel pour la racine carree
 *
 * Return: La racine carree naturelle de num si elle existe, sinon -1
 */
int square(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (square(num, root + 1));
	}
}

/**
 * _sqrt_recursion - Calcule la racine carree naturelle d'un nombre
 * @n: Le nombre dont on veut la racine carree
 *
 * Return: La racine carree de n ou -1 si n n'a pas de racine naturelle
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}
