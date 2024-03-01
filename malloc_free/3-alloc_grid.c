#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - crear un array bidimensional
* @width: ancho
* @height: altura
* Return: puntero al primer elemento de la matriz
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matriz;

	if ((width < 1) || (height < 1))
	{
		return (NULL);
	}
	matriz = malloc(sizeof(int *) * height);

	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		matriz[i] = malloc(sizeof(int) * width);

		if (matriz[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matriz[j]);
			}

			free(matriz);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}

	return (matriz);

}
