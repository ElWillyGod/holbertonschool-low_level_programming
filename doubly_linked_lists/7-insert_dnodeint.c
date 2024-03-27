#include "lists.h"
#include <stdlib.h>

/**
*insert_dnodeint_at_index - insertar un nodo en la pos dada;
*@h: lista donde insertar;
*@idx: pos en donde insert;
*@n: date of the insert
*
*Return: pointer of new date;
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *aux;

	if (idx == 0)
		return (add_dnodeint(h, n));

	aux = *h;

	for (; idx != 1;  idx--)
	{
		aux = aux->next;
		if (aux == NULL)
		{
			return (NULL);
		}
	}

	if (!aux->next)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = aux;
	newNode->next = aux->next;

	aux->next->prev = newNode;
	aux->next = newNode;

	return (newNode);
}
