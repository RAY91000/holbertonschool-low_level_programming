#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Point d'entrée du programme pour effectuer des opérations simp
 * @argc: Nombre d'arguments passés au programm
 * @argv: Tableau des arguments
 * Return: 0 en cas de succès, ou un code d'erreu
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
