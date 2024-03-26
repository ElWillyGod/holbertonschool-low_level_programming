#include "lists.h"
#include <stdlib.h>

/**
*
*
*
*
*
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

	if (*head)
	{
		
	}
}
/* armar el nodo y agregaro */
