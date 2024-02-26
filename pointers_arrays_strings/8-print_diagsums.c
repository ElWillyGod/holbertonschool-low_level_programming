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
	int i, indice;

	for (i = 0; i < size; i++)
	{
		indice = i * size + i;

		traza += a[indice];

		indice = (i + 1) * size - (i + 1);

		trazant += a[indice];
	}

	printf("%d, %d\n", traza, trazant);
}
