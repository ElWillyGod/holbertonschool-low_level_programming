#include "main.h"

/**
 * is_prime_number - imprime 1 si el numero es primo y 0 si no
 * @n: numero a evaluar
 *
 * Return: retorna 1 si es primo y 0 si no
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
