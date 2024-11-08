#include "main.h"
/**
 * square - Calcule la racine carree d'un nombre avec une recherche recursive
 * @num: Le nombre dont on cherche la racine carree
 * @root: Le candidat actuel pour la racine carree
 *
 * Return: La racine carree de num si elle est naturelle, sinon -1
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
int _sqrt_recursion(int n)

{
if (n < 0)
return (-1);
else
return (square(n, 0));
}
