#include "function_pointers.h"

/**
*int_index - imprime el elemento de que estamos buscando
*@array: array donde estan los numeros
*@size: tamanio del array
*@cmp: comparacion del los elementos
*
*Return: int, retorna el numero o - 1 si no lo encuentra
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp[array[i]])
		{
			return (i);
		}
	}

	return (-1);
}
