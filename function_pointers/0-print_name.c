#include "function_pointers.h"

/**
*print_name - imprime el nombre
*
*@name: nombre a imprimir
*@f: puntero
*
*Return: void, solamente imprime
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
