#include "main.h"

/**
 * _puts_recursion - mostrar un string con recutsion
 * @s: string a mostrar
 *
 * Return: void, solo mostramos el char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}


