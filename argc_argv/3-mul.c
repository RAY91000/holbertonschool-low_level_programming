#include "main.h"

/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector (array of arguments)
 *
 * Return: 0 if two argument are provided & multiplication succeed, 1 otherwise
 */
int main(int argc, char *argv[])

{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
