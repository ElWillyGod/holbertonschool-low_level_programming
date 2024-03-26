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

#endif /* LISTS_H */
