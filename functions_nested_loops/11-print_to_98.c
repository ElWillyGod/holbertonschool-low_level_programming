#include "main.h"

/**
 * print_to_98 - no se bien
 * @n: numero XD
 * Return: no se bien
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		n > 98 ? n-- : n++;
	}

	printf("98\n");

}
