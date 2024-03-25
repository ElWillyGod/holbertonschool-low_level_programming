#include "lists.h"

/**
*list_len - numero de elementos de la lista
*@h: lista a contar;
*
*Return: la cantidad de elementos a imprimir;
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	for (; h; h = h->next, n++)
		;

	return (n);
}
