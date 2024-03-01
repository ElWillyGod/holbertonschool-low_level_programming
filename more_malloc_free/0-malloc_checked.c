#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - asigna memoria con el malloc_checked
 * @b: cantidad de memoria
 *
 * Return: void, solo asigna memoria
 */

void *malloc_checked(unsigned int b)
{
	int *punt;

	punt = malloc(b);

	if (punt == NULL)
	{
		exit(98);
	}

	return (punt);
}
