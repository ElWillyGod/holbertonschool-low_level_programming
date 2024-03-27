#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct rep_dlistint dlistint_t;

/**
 *struct rep_dlistint - estructura de la lista doble
 *@n: dato
 *@next: next nodo
 *@prev: nodo anterior
 */

struct rep_dlistint
{
	int n;
	dlistint_t *next;
	dlistint_t *prev;
};

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);

#endif /* LISTS_H */
