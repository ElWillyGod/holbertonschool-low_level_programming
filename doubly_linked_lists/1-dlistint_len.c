#include "lists.h"

/**
* dlistint_len - that return the number for elements
*@h: linked list
*
*Return: void, solamente imprime
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	for (; h; h = h->next, n++)
		;

	return (n);
}
