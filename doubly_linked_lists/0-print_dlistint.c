#include "lists.h"
#include <stdio.h>

/**
*
*
*
*
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodos = 0;

	for (; h; h = h->next, nodos++)
	{
		printf("%d\n", h->n);
	}

	return (nodos);
}
