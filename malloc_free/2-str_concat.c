#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatena una dos cadenas;
* @cad1: primera cadena;
* @cad2: segunda cadena;
*
* Return: retrna la cadena concatenada
*/

char *str_concat(char *cad1, char *cad2)
{
	char *concatenada;

	int i, j;

	if (cad1 == NULL)
	{
		cad1 = "";
	}

	if (cad2 == NULL)
	{
		cad2 = "";
	}

	/**
	* usamos j para medir la suma del largo de los string
	*/

	for (j = 0; cad1[j] || cad2[j]; j++)
	;

	concatenada = malloc(sizeof(char) * j);

	if (concatenada == NULL)
	{
		return (NULL);
	}

	for (i = 0; cad1[i]; i++)
	{
		concatenada[i] = cad1[i];
	}

	for (j = 0; cad2[j]; j++)
	{
		concatenada[i] = cad2[j];
		i++;
	}

	return (concatenada);
}
