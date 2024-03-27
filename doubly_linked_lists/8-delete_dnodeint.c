#include "lists.h"

/**
*delete_dnodeint_at_index - elimina el nodo correspondiente al index;
*@head: lista doble;
*@index: pos a elimina
*
* Return: 1 si es exitoso eliminar, -1 si no lo es;
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	for (; index != 0 && aux; aux = aux->next, index--)
		;

	if (!aux)
		return (-1);

	if (aux == *head)
	{
		*head = aux->next;

		if (aux->next)
			aux->next->prev = aux->prev;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next)
			aux->next->prev = aux->prev;
	}

	free(aux);
	return (1);
}
