#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements the given list
 * @h: A pointer
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
