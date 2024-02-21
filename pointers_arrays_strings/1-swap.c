#include "main.h"
/**
 * swap_int - cambiar valor de ints
 * @a: primer valor
 * @b: segundo valor
 * Return: nada, solo intercambiar
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
