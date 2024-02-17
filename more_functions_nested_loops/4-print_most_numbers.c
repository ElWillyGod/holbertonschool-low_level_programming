#include "main.h"

/**
 * print_most_numbers - numeros menos el 2 y 4
 *
 * Return: nada
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}

	_putchar(10);
}
