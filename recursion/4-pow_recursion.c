#include "main.h"

/**
 * _pow_recursion - elevar un numero al cuadrado
 * @x: numero a elevar
 * @y: exponente
 *
 * Return: numero luego de ser elevado
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
