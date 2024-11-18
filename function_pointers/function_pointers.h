#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Inclus les bibliothèques nécessaires */
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
int _puthar(char c);

#endif /* FUNCTION_POINTERS_H */

