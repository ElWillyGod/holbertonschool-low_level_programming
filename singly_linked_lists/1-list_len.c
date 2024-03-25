#include "lists.h"

/**
*list_len - numero de elementos de la lista 
*
*
*
*
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h; h = h->next, n++)
		;

	return (n);
}
