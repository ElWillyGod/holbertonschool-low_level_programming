#include "lists.h"
#include <stdio.h>

/**
*print_list - imprime la lista;
*@h: lista a imprimir;
*
* Return: numero de nodos
*/

size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h; h = h->next, n++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	}

	return (n);
}
