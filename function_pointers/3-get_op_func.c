#include "3-calc.h"

/**
 * get_op_func - Sélec la fonct appropri�e en fonction de l'opéraeur
 * @s: L'opérateur passé en argume
 * Return: pointeur vers la fonction correspondante ou NULL si non trouver
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
			i++;
	return (NULL);
}
