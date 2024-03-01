#include "main.h"
#include <stdlib.h>

/**
 * array_range - crear un array de int'
 * @min: minimo del rango
 * @max: maximo del rango
 *
 * Return: retornamos el puntero al arreglo;
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}

	return (array);
}
