#include "lists.h"
#include <stdlib.h>

/**
*free_dlistint - libera la memoria de una lista
*@head: lista a liberar
*
*Return: void, solo libera;
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
