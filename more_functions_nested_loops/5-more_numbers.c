#include "main.h"

/**
 * more_numbers - numeros del 0 a 14 10 veces
 *
 * Return: nada
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}

		for (j = 10; j <= 14; j++)
		{
			printf("%d", j);
		}

		_putchar(10);
	}
}
