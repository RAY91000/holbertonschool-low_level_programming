#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print.
 * Return - 0 if succes.
 */

void print_binary(unsigned long int n)
{
	int i;
	int started = 0;

	for (i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
			_putchar('0');
	}

	if (!started)
		_putchar('0');
}
