#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Imprime les opcodes de la fonction main elle-même
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau des arguments
 * Return: 0 en cas de succès, 1 ou 2 en cas d'erreur
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *ptr;

	if (argc != 2) /* Vérifie si un seul argument est fourni */
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]); /* Convertit l'argument en entier */
	if (num_bytes < 0) /* Vérifie si le nombre d'octets est négatif */
	{
		printf("Error\n");
		return (2);
	}

	ptr = (unsigned char *)main; /* Obtenir l'adresse de la fonction main */

	/* Boucle pour afficher les opcodes */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
