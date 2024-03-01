#include "main.h"
#include <stdlib.h>

/**
 * _calloc - asignar la memoria de un matriz con malloc
 *@nmemb: la matriz
 *@size: el tamanio
 *Return: void, el puntero a la memoria del array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *punt;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	punt = malloc(nmemb * size);

	if (punt == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		punt[i] = 0;
	}

	return (punt);
}
