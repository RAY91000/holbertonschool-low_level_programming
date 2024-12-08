#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints a list
 * @h: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
