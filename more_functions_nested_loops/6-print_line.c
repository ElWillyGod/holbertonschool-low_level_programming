#include "main.h"

/**
 * print_line - imprimir lineas
 * @n: numero de lineas
 * Return: nada, solo imprime
 */

void print_line(int n)
{
	int i;

	i = 0;

	while ((n > 0) && (i < n))
	{
		_putchar('_');

		i++;
	}

	printf("\n");
}
