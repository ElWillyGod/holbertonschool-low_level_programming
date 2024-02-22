#include "main.h"

/**
 * puts2 - imprimir el string de dos en dos
 * @str: char a imprimir
 * Return: nada, solo imprime
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar(10);
}
