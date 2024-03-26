#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - add to date fot list
*@head: list the add node new
*@n: date of node new
*
*Return: dlistint_t for new node add;
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNodo;

	newNodo = malloc(sizeof(dlistint_t));
	if (!newNodo)
	{
		return (NULL);
	}

	newNodo->n = n;
	newNodo->prev = NULL;
	newNodo->next = *head;

	if (*head)
	{
		(*head)->prev = newNodo;
	}
	*head = newNodo;

	return (newNodo);
}
