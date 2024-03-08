#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_all - imprime los todos los parametros que le dan
*@format: tipo de dato a imprimir;
*
*Return: void, solo imprime todos los tipos
*/

void print_all(const char *const format, ...)
{
	va_list para;

	Tfunciones print_types[] = {

		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	unsigned int i, j;
	char *sepa = "";

	va_start(para, format);
	i = 0;

	while ((format != NULL) && (format[i]))
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == *print_types[j].tipo)
			{
				print_types[j].print(sepa, para);
				sepa = ", ";
			}

			j++;
		}
		i++;
	}

	va_end(para);
	printf("\n");
}

/**
 *print_int - imprime el int;
 *@sepa: separador entre entre los parametros;
 *@arg: parametro a imprimir;
 *
 *Return: void, solo muestra;
 */

void print_int(char *sepa, va_list arg)
{
	printf("%s%d", sepa, va_arg(arg, int));
}

/**
 *print_float - imprime el float;
 *@sepa: separador entre entre los parametros;
 *@arg: parametro a imprimir;
 *
 *Return: void, solo muestra;
 */
void print_float(char *sepa, va_list arg)
{
	printf("%s%f", sepa, va_arg(arg, double));
}

/**
 *print_char - imprime el char;
 *@sepa: separador entre entre los parametros;
 *@arg: parametro a imprimir;
 *
 *Return: void, solo muestra;
 */
void print_char(char *sepa, va_list arg)
{
	printf("%s%c", sepa, va_arg(arg, int));
}

/**
 *print_string - imprime el string;
 *@sepa: separador entre entre los parametros;
 *@arg: parametro a imprimir;
 *
 *Return: void, solo muestra;
 */

void print_string(char *sepa, va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("%s(nil)", sepa); /* separador */
		return;
	}
	printf("%s%s", sepa, string);
}
