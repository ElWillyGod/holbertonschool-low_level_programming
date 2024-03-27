#include "lists.h"

/**
*sum_dlistint - suma de los numeros
*@head: list;
*
*Return: suma of numbers at list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
