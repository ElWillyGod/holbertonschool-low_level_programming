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
	int i, indiInf, ace;

	traza = 0;
	trazant = 0;
	ace = 0;
	indiInf = size - 1;

	for (i = 0; i < size; i++)
	{
		traza += *(a + i * size + ace);
		trazant += *(a + i * size + indiInf);
		ace += 1;
		indiInf -= 1;
	}

	printf("%d, %d\n", traza, trazant);
}
