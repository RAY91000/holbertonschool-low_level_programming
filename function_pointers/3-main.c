#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations based on user input
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, appropriate exit status on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	res = operation(num1, num2);
	printf("%d\n", res);

	return (0);
}
