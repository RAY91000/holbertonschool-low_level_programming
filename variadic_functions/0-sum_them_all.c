#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list param;

	if (n == 0)
	{
		return (0);
	}

	va_start(param, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(param, const unsigned int);
	}
	return (sum);
}
