#include "main.h"

/**
 * more_numbers - numeros del 0 a 14 10 veces
 *
 * Return: nada
 */

void more_numbers(void)
{
	int i, j;
	char d;

	for (i = 0; i <= 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}

		for (j = 0; j <= 4; j++)
		{
			d = '1';

			write(1, &d, 1);

			d = j + '0';

			write(1, &d, 1);
		}
	}
}
