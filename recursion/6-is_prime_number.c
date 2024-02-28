#include "main.h"

/**
 * primo - es primo?
 * @i: posible primo
 * @j: posible evaluacion de primo
 *
 * Return: int, 1 si es primo, 0 si no
 */

int primo(int i, int j)
{
	if (i <= 1)
	{
		return (0);
	}
	if ((i % j == 0) && (j > 1))
	{
		return (0);
	}
	if ((i / j) < j)
	{
		return (1);
	}

	return (primo(i, j + 1));
}


/**
 * is_prime_number - imprime 1 si el numero es primo y 0 si no
 * @n: numero a evaluar
 *
 * Return: retorna 1 si es primo y 0 si no
 */

int is_prime_number(int n)
{
	return (primo(n ,1));
}
