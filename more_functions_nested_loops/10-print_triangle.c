#include "main.h"

/**
 * print_triangle - imprime un traungulo
 * @size: largo del triangulo
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - y -1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	
	if (size == 0)
	{
		_putchar('\n');
	}
}
