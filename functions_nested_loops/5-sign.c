#include "main.h"

/**
 * print_sign - Imprime le signe d'un nombre
 * @n: Le nombre dont on veut connaître le signe
 *
 * Return: 1 et imprime + si n est supérieur à zéro,
 *         0 et imprime 0 si n est zéro,
 *         -1 et imprime - si n est inférieur à zéro
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
