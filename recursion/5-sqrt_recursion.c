#include "main.h"

/**
 * sqrt - raiz cuadrada
 * @i: numero a sacar la raiz cuadrada
 * @j: exponente;
 *
 * Return: raiz cuadrada
 */

int sqrt(int i, int j)
{
	if (i == (j * j))
	{
		return (j);
	}
	else
	{
		if ((j * j) > i)
		{
			return (-1);
		}
		else
		{
			return (sqrt(i, j + 1));
		}
	}
}

/**
 * _sqrt_recursion - raiz cuadrada de un numero
 * @n: nuero a sacar raiz
 *
 * Return: retirna el int que de su raiz cuadrada, -1 si no es entero
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}

	/**
	 * calcular la raiz cuadrada
	 */

	return (sqrt(n, 0);
}
