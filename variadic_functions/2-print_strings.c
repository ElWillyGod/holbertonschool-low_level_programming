#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - imprime los parametros string;
*@separator: separador entre parametros;
*@n: cantidad de parametros;
*
*Return: void, solo muestra los parametros char
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;
	char *esChar;

	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		esChar = va_arg(para, char*);

		if (esChar != NULL)
		{
			printf("%s", esChar);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(para);
}
