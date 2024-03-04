#include "function_pointers.h"

/**
*array_iterator - imprime el interior de un array
*
*@array: array
*@size: tamanio del array
*@action: action a realizar
*Return: void, solo imprimela las cosas
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (; size > 0; size--)
	{
		action(*array);
		array++;
	}
}
