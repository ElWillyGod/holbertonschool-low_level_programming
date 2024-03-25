#include "lists.h"
#include <stdlib.h>

/**
*free_list - libera la lista
*@head: lista a liberar
*
*Return: void, solo elimina;
*/

void free_list(list_t *head)
{
	list_t *element;

	while (head)
	{
		element = head->next;
		free(head->str);
		free(head);
		head = element;
	}
}
