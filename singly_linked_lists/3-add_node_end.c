#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
*add_node_end - agregar el final;
*@head: lista donde agregar;
*@str: nuevo elemento;
*
*Return: lista con el agregando el elemento al final;
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo, *cursor;
	int len;

	if (!str)
		return (NULL);

	nuevo = malloc(sizeof(list_t));
	if (!nuevo)
		return (NULL);

	nuevo->str = strdup(str);
	if (!nuevo->str)
	{
		free(nuevo);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	nuevo->len = len;
	nuevo->next = NULL;

	if (!*head)
	{
		*head = nuevo;
		return (nuevo);
	}

	cursor = *head;
	while (cursor->next)
	{
		cursor = cursor->next;
	}

	cursor->next = nuevo;
	return (nuevo);
}
