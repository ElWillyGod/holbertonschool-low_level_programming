#include "main.h"

/**
 * print_rev - imprime un array de char invertido
 *@s: string a mostrar
 *Return: imprime el string invertido
 */

void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
		i++;

	for (; i != 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar(10);
}
