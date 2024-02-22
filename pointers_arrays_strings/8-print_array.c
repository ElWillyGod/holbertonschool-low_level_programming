#include "main.h"

/**
 * print_array - imprimir n numeros de la matriz a
 * @a: matriz del array
 * @n: numero de elementos que tenes que mostrar
 * Return: tipo void, solo muestra n numeros
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n -1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

