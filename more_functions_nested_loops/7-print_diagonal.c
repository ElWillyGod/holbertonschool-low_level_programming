#include "main.h"

/**
 * print_diagonal - imprimir lineas
 * @n: numero de lineas
 * Return: nada, solo imprime
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while ((n > 0) && (i < n))
	{
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		i++;
		j = 0;

		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');
}
