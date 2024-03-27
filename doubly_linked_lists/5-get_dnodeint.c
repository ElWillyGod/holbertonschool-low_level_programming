#include "lists.h"
#include <strings.h>

/**
*get_dnodeint_at_index - retorna el nodo correspodiente al index
*@head: double linked list
*@index: index for list to return
*
* Return: node that list reference of index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head && index != 0; head = head->next, index--)
		;

	return (head ? head : NULL);
}
