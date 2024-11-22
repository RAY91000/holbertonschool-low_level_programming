#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/*
 * File: variadic_functions.h
 * Auth: Guele T Wilfried P.
 * Desc: Header file containing prototypes for all functions.
 *       used in the variadic_functions directory.
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
