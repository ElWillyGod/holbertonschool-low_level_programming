#include "main.h"

/**
 * _print_rev_recursion - imptime un string a la inversa
 * @s: array de char a imprimir
 *
 * Return: void,solo imprime el string al revez;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
