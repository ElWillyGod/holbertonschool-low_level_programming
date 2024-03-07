#include "variadic_functions.h"

/**
*print_numbers - imprime lso numeros que se le pasan por parametro
*@separador: separador entre los parametros;
*@cantPar: cantidad de parametros
*
*Return: void, solo muestra los ints;
*/

void print_numbers(const char *separador, const unsigned int cantPar, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, cantPar);

	for (i = 0; i < cantPar; i++)
	{
		printf("%d", va_arg(args, int));

		if ((separador != NULL) && (i < cantPar - 1))
		{
			printf("%s", separador);
		}
	}

	printf("\n");

	va_end(args);
}
