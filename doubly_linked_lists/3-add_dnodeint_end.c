#include "lists.h"
#include <stdlib.h>

/**
*add_dnodeint_end - add to date of the end list
*@head: list;
*@n: date;
*
*Return: dlistint_t, date to add of list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *aux;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	/* if head == NULL */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;

		return (newNode);
	}

	/* traver the list */

	aux = *head;

	while (aux->next != NULL)
		aux = aux->next;

	aux->next = newNode;
	newNode->prev = aux;

	return (newNode);
}
