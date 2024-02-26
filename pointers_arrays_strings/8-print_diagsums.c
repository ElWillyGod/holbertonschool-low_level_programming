#include "main.h"

/**
 * print_diagsums - imprime la traza de una matriz
 *
 * @a: matriz
 * @size: tamanio de la matriz
 *
 * Return: void, solo imprime la suna de la trazza
 */

void print_diagsums(int *a, int size)
{
	int traza, trazant;
	int i;

	for (i = 0; i < size; i++)
	{
		traza = traza + a[i][i];
		trazant = trazant +  a[i][size - i - 1];
	}

	printf("%d, %d\n", traza, trazant);
}
