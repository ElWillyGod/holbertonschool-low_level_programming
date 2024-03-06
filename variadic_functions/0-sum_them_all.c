#include "variadic_functions.h"

/**
*sum_them_all - suma todas las var
*@n: cantidad de variables
*
*Return: retorna la suma de los argumentos
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int suma = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		suma += va_arg(arg, unsigned int);
	}

	va_end(arg);

	return (suma);
}
