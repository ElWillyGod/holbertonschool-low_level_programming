#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct rep_list list_t;

/**
 * struct rep_list - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

struct rep_list
{
	char *str;
	int len;
	list_t *next;
};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
