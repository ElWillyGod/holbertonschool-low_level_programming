#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separador, const unsigned int n,...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_int(char *sepa, va_list arg);

void print_float(char *sepa, va_list arg);

void print_char(char *sepa, va_list arg);

void print_string(char *sepa, va_list arg);

void print_all(const char * const format, ...);

/**
 *struct rep_funciones - estructura para los formatos 
 *@tipo: tipo de dato
 *@print: puntero a la funcion que imprime
 *
 */

struct rep_funciones{
	char *tipo;
	void (*print)(char *separador, va_list parame);
};

typedef struct rep_funciones Tfunciones;

#endif /* VARIADIC_FUNCTIONS_H */

