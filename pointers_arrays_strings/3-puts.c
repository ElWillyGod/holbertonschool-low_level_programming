#include "main.h"

/**
 * _puts - muestra el contenido de un puntero char
 * @str: cadena a mostrar
 * Return: void, solo muestra la cadena
 */

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar(10);
}
