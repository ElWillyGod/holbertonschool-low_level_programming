#include "main.h"

/**
 * factorial - factorial del numero
 * @n: numero a factorizar
 *
 * Return: retorna el int de la factoizacion
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}

