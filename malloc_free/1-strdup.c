#include "main.h"
#include <stdlib.h>

/**
 * _strdup - devuelve un puntero a una copia de un string
 * @str: string a copiar
 *
 * Return: retorna el puntero de la copia
 */

char *_strdup(char *str)
{
	char *copia;
	int i;

	for (i = 0; str[i]; i++)
	;

	copia = malloc(sizeof(char) * i + 1);

	if (copia == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		copia[i] = str[i];
	}

	copia[i] = '\0';

	return (copia);
}
