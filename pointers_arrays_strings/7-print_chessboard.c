#include "main.h"

/**
 * print_chessboard - imprime el tablero de ajerdres
 *
 * @a: la matriz de bloques
 *
 * Return: void; solo muerta el tablero;
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar(10);
	}
}
