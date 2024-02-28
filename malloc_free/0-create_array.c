#include "main.h"
#include <stdlib.h>

/**
 * create_array - crea una matriz y la inicializa con un caracter espesifico
 * @size: caracter
 * @c: matriz a crear;
 *
 * Return: devuelve una matriz inicializada con el caracter
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ret;

	if (size == 0)
	{
		return (NULL);
	}

	ret = malloc(sizeof(char) * size);

	if (ret == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ret[i] = c;
	}

	return (ret);
}
