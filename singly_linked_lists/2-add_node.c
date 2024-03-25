#include "lists.h"

/**
*add_node - agregar el nodo;
*@head: lista donde agregar el nodo;
*@str: string a agregar en la lista;
*
*Return: retorna la lista con el elemento agregado;
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}

	nuevo->str = strdup(str);

	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	
	for (len = 0; str[len]; len++)
		;

	nuevo->len = len;
	nuevo->next = *head;
	*head = nuevo;

	return (nuevo);
}
