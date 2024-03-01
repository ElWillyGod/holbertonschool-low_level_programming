#include "main.h"
#include <stdlib.h>

/**
 * free_grid - lierar la memora de una matriz
 * @grid: matriz;
 * @height: alto;
 *
 * Return: void, solamente liberamos la memoria
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
