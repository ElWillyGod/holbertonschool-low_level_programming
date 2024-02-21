#include "main.h"

/**
 * print_rev - imprime un array de char invertido
 *@s: string a mostrar
 *Return: imprime el string invertido
 */

void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		print_rev(&s[1]);

		_putchar(*s);
	}
}
