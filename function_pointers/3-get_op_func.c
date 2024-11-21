#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction appropriée en fonction de l'opérateur
 * @s: L'opérateur passé en argument
 * Return: Un pointeur vers la fonction correspondante ou NULL si non trouvé
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
            return (ops[i].f);
        else
            i++;
    return (NULL);
}
